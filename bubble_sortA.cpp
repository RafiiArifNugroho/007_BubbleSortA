

#include <iostream>
#include <string>
using namespace std; // Library

int arr[20]; // Deklarasi Variabel global
int n;

void input()
{
    int d; // Procedure input
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;
        if (n <= 20)
            break;
        else
        {
            cout << "Error! number should be in range of 1-20." << endl;
        }
    }

    cout << endl;
    cout << "-------------------" << endl;
    cout << "Enter Array Element" << endl;
    cout << "-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void bubbleSortArray()
{
    int pass = 1;

    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass += 1;

        cout << "\nPass " << pass - 1 << ": ";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

    } while (pass <= n - 1);
}

void display()
{
    cout << endl;
    cout << "-------------------" << endl;
    cout << "Sorted Array" << endl;
    cout << "-------------------" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "amount of passes: " << n - 1 << endl;
    cout << endl;
    cout << endl;
}

int main()
{
    input();
    bubbleSortArray();
    display();
    system("pause");
    return 0;
}