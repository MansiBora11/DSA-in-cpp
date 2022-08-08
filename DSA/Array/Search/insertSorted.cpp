// Insert in sorted array
#include <iostream>
using namespace std;

int insertSorted(int arr[], int n, int key, int capacity)
{

    if (n >= capacity)
        return n;
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > key); i--)
        arr[i + 1] = arr[i];
    arr[i + 1] = key;
    return (n + 1);
}

int main()
{
    int arr[20] = {1, 2, 3, 5, 6, 7};
    int n = 6;
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int key = 4;
    int i;

    cout << "Before insertion: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n = insertSorted(arr, n, key, capacity);
    cout << "\nAfter insertion: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}