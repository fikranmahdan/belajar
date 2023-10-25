#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "masukan panjang pola : ";
    cin >> n;

    for (int a = 1; a <= n; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << "x";
        }
        cout << endl;
    }
    cout << "akhir" << endl;

    for (int a = 1; a <= n; a++)
    {
        for (int b = n; b >= a; b--)
        {
            cout << "x";
        }
        cout << endl;
    }

    return 0;
}