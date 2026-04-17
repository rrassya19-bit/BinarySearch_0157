#include <iostream>
using namespace std;

int element [10];
int nPanjang;
int X;

void input()
{
    while (true)
    {
        cout << "Masukan banyaknya elemen pada array (Maksimal 10): ";
        cin >> nPanjang;

        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. Silahkan coba lagi.\n";
        }
    }

    cout << "\n=========================\n";
    cout << "Masukan elemen pada array: ";
    cout << "\n=========================\n";

    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Element ke-" << (i + 1) << "= ";
        cin >> element[i];
    }
}