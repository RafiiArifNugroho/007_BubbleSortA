

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

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan elemen array" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void bubbleSortArray() // procedur untuk mengurutkan array dengan metode bubble sort
{
    int pass = 1; // step 1

    do
    {
        for (int j = 0; j < n - 1 - pass; j++) // step 2
        {
            if (arr[j] > arr[j + 1])
            { // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        pass += 1; // step 4

        cout << "\nPass " << pass - 1 << " : "; // Number of pass
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // Menampilkan data pada number of pass
        }

    } while (pass <= n - 1); // Step 5
}

void display()
{
    cout << endl;
    cout << "=============================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=============================" << endl;
    cout << endl;

    for (int j = 0; j < n; j++)
    {
        cout << arr[j]; // menampilkan array
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }

    cout << endl;
    cout << endl;

    cout << "Jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;
}
