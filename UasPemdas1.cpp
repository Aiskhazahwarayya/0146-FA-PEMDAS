/*! \mainpage Sistem Manajemen Pemrograman dan Jaringan
* \section intro_sec Pengantar
* Selamat datang di dokumentasi Sistem Manajemen Pemrograman dan Jaringan.
* Sistem ini dirancang untuk Matakuliah dapat 
*
* \section structure_sec Struktur Kode
* kode ini terdiri dari dua kelas utama:
* - \b Pemrograman: Menangai operasi yang terkait dengan pemrograman dan jaringan.
* - \b Jaringan: Menangani informasi tentang jaringan yang mereka ikuti.
*
* \section setup-sec Setup dan Konfigurasi
* Untuk menjalankan sistem ini, pastikan Anda memiliki Compiler yang mendukung standar C++11 atau lebih tinggi.
* Kompilasi dan jalankan file ini menggunakan compiler pilihan Anda.
*
* \section author_sec Tentang Pengembang
* Sistem ini dikembangkan oleh aiskhazahwarayya.id sebagai bagian dari inisiatif untuk memilih akan menghitung nilai dari mata kuliah Pemrograman atau Jaringan.
* 
* \section note_sec Catatan
* Dokumentasi ini dihasilkan  menggunakan Doxygen. Pastikan untuk mengikuti komentar yang disediakan dalam kode untuk pemahaman yang lebih baik.
*/
 
 /**
 * @file UasPemdas.cpp
 * @brief 
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * @class Matakuliah
 * @brief 
 */
class MataKuliah{
public: 
    string presensi[100];

    float presensi;
    string activity[90];
    string exercise[87];
    string Tugasakhir[70];

public:
    MataKuliah()
    {
        MataKuliah (string pPresensi, float pNilai ) : presensi(pPresensi), nilai(pNilai){}
        ~MataKuliah (){
            cout << "presensi =" << presensi << endl;
            cout << "Nilai =" << nilai << endl;
        }

        presensi= 0.0;

    }
    virtual void namaMataKuliah()
    {
        cout << " pemrograman dan jaringan";
        return;
    }
    void setPresensi(float nilai)
    {
        this -> presensi = nilai;
    }

    void setActivity(float nilai)
    {
        this -> activity =activity;
    }

    void setExercise(float nilai)
    {
        this -> exercise = exercise;
    }

     void setTugasAkhir(float nilai)
    {
        this -> Tugasakhir = Tugasakhir;
    }

    float getPresensi()
    {
        return presensi;
    }

     float getActivity()
    {
        return activity;
    }

     float getExercise()
    {
        return exercise;
    }

    float getTugasAkhir()
    {
        return Tugasakhir;
    }
   
};

class Pemrograman : public MataKuliah
{
public:
    void pesan()
    {
        cout << "Pesan dari Pemrograman" << endl;
    }
};

class Jaringan : public MataKuliah
{
public:
    void pesan ()
    {
        cout "Pesan dari Jaringan" << endl;
    }
};

int main()
{

char pilih;
MataKuliah *mataKuliah;
Pemrograman pemrograman;
Jaringan jaringan;




}

