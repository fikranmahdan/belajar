#include <iostream>
using namespace std;
int main()
{
     string K_a, K_t;
     int n_kb, T_k;
     double J_b, J_t;
     cout << "Nomor keberangkatan : ";
     cin >> n_kb;
     cout << "Kota Asal : ";
     cin >> K_a;
     cout << "Kota tujuan : ";
     cin >> K_t;
     cout << "Tanggal Keberangkatan : ";
     cin >> T_k;
     cout << "Jam Keberangkatan : ";
     cin >> J_b;
     cout << "Jam Tiba : ";
     cin >> J_t;
     cout << endl
          << endl;

     cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
     cout << "| INI ADALAH TIKET DARI JADWAL KERETA API KITA \n";
     cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
     cout << "| jam keberangkatan anda : " << n_kb << endl
          << "| kota asal anda : " << K_a << endl
          << "| kota tujuan anda : " << K_a << endl
          << "| Tanggal keberangkatan anda : " << T_k << endl
          << "| jam keberangkatan : " << J_b << endl
          << "| Jam tiba : " << J_t << endl;
     cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
     return 0;
}