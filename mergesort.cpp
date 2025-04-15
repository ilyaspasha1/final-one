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
void mergeSort(int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    // Recursive calls to divide the array
    mergeSort(low, mid);
    mergeSort(mid + 1, high);

    // Merging two sorted halves
    int i = low;
    int j = mid + 1;
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            B[k++] = arr[i++];
        }
        else
        {
            B[k++] = arr[j++];
        }
    }

    while (j <= high)
    {
        B[k++] = arr[j++];
    }

    while (i <= mid)
    {
        B[k++] = arr[i++];
    }

    for (int x = low; x <= high; x++)
    {
        arr[x] = B[x];
    }
}
