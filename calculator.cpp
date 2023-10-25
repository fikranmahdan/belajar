#include <iostream>

using namespace std;

int main()
{

    // Deklarasi variabel
    float absensi, tugas, uts, uas, nilai_akhir;
    char nilai_huruf;

    cout << "Program Menghitung Nilai Akhir Mahasiswa" << endl;
    cout << "----------------------------------------" << endl;

    // Proses input
    cout << "Masukan Nilai Absensi : ";
    cin >> absensi;

    cout << "Masukan Nilai Tugas : ";
    cin >> tugas;

    cout << "Masukan Nilai UTS : ";
    cin >> uts;

    cout << "Masukan Nilai UAS : ";
    cin >> uas;

    // Hitung sesuai rumus
    nilai_akhir = ((absensi * 0.1) + (tugas * 0.2) + (uts * 0.3) + (uas * 0.4));

    if (nilai_akhir >= 80)
    {
        nilai_huruf = 'A';
    }
    else if (nilai_akhir >= 70)
    {
        nilai_huruf = 'B';
    }
    else if (nilai_akhir >= 60)
    {
        nilai_huruf = 'C';
    }
    else if (nilai_akhir >= 50)
    {
        nilai_huruf = 'D';
    }
    else
    {
        nilai_huruf = 'E';
    }

    // Proses output
    cout << endl;
    cout << "Nilai Akhir : " << nilai_akhir << endl;
    cout << "Nilai Huruf : " << nilai_huruf << endl;
}