// Searching in sorted array
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2;
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binarySearch(arr, (mid + 1), high, key);
    return binarySearch(arr, low, (mid - 1), key);
}

int main()
{
    int arr[] = {23, 34, 45, 56, 67, 78, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 67;

    cout << "Index: " << binarySearch(arr, 0, n - 1, key) << endl;
    return 0;
}