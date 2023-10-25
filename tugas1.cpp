#include <iostream>

using namespace std;

double nilai_Akhir(double nilai_Tugas, double nilai_Uts, double nilai_Uas)
{
    const double bobot_Tugas = 0.3;
    const double bobot_Uas = 0.4;
    const double bobot_Uts = 0.3;

    double hitung_Nilai_Akhir = (nilai_Tugas * bobot_Tugas) + (nilai_Uts * bobot_Uts) + (nilai_Uas * bobot_Uas);
    return hitung_Nilai_Akhir;
}

int main()
{
    double nilai_Tugas, nilai_Uts, nilai_Uas;
    string nama_mhs;
    cout << "masukkan nama mahasiswa : ";
    cin >> nama_mhs;
    cout << "masukkan nilai tugas : ";
    cin >> nilai_Tugas;
    cout << "masukkan nilai UTS : ";
    cin >> nilai_Uts;
    cout << "masukkan nilai UAS : ";
    cin >> nilai_Uas;

    double hitung_Nilai_akhir = nilai_Akhir(nilai_Tugas, nilai_Uts, nilai_Uas);
    cout << "Nilai akhir " << nama_mhs << " adalah " << hitung_Nilai_akhir;
}