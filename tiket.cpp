
#include <iostream>
using namespace std;
int main()
{
    string tujuan;
    int jumlah_tiket;
    int harga;
    int diskon;

    cout << "Selamat datang di layanan pembelian tiket bis! \n";
    cout << "Bis ini dengan tujuan : Jakarta, Bandung, Surabaya" << endl;
    cout << "---------------------------------------------------" << endl;
    // input tujuan

    cout << "masukkan kota tujuan anda : ";
    cin >> tujuan;

    // input jumlah tiket
    cout << "masukkan jumlah tiket : ";
    cin >> jumlah_tiket;
    cout << "---------------------------------------------------" << endl;

    diskon = 0;
    harga = 0;
    // tujuan jakarta
    if (tujuan == "Jakarta")
    {
        harga = 50000;
        cout << "tiket dengan tujuan " << tujuan << " sebesar " << harga << endl;
    }

    // tujuan bandung
    else if (tujuan == "Bandung")
    {
        harga = 75000;
        cout << "tiket dengan tujuan " << tujuan << " sebesar " << harga << endl;
    }
    // tujuan surabaya
    else if (tujuan == "Surabaya")
    {
        harga = 100000;
        cout << "tiket dengan tujuan " << tujuan << " sebesar " << harga << endl;
    }
    else
    {
        cout << "maaf tiket tidak tersedia \n";
    }

    // total harga
    cout << "---------------------------------------------------" << endl;

    int total = harga * jumlah_tiket;
    if (total > 250000)
    {
        diskon = 30000;
    }
    cout << "Harga per tiket : " << harga << endl;
    cout << "Total harga tiket : " << total << endl;
    cout << "pembelian diatas 250000 diskon : " << diskon << endl;
    cout << "Jumalah yang harus dibayar : " << total - diskon << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Kami sangat senang anda menggunakan layanan kami, semoga selamat sampai tujuan :) ";

    return 0;
}