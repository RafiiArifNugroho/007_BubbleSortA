

#include <iostream>
#include <string>
using namespace std;

int arr[20]; // Deklarasi Variable Global array a dengan ukuran 20
int n;       // Deklarasi variable global n untuk menyimpan banyaknya

void input()
{
    // procedur untuk input
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "n\Array dapat mempunyai 20 elemen.\n";
        }
    }
}

void input()
{
    int d;
    while (true)
    {
        cout << "Masukan banyaknya elemnt (max 20): ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "Maksimal banyaknya elemen adalah 20";
        }
    }
