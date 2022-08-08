// Deletion from unsorted array
#include <iostream>
using namespace std;

int findItem(int arr[], int key, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int deleteItem(int arr[], int key, int n)
{
    int pos = findItem(arr, key, n);
    if (pos == -1)
        cout << "Element not found";
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
        return (n - 1);
    }
}
int main()
{
    int arr[] = {22, 45, 64, 23, 56, 67};
    int key = 23;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "/n Before deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = deleteItem(arr, key, n);
    cout << "after deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
