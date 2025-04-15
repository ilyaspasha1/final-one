#include <iostream>
using namespace std;

// repository name: mergesort_4nimbelakang

// create main array & temporary array
int arr[20], B[20];  // Max array size is 20
int n;

// ======================
// Commit 1: Input array
// ======================
void input()
{
    while (true)
    {
        cout << "Masukkan Panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "\nMaksimal panjang array adalah 20\n";
        }
    }

    cout << "\n------------------------" << endl;
    cout << "Inputkan Isi element array" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke-" << i << " : ";
        cin >> arr[i];
    }
}
