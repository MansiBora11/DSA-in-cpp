
//Searching from unsorted array
#include <iostream>
using namespace std;

int findItem(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main()
{
    int arr[] = {34,45,23,45,24};
    int n= sizeof(arr)/sizeof(arr[0]);
    int key=66;

    int position=findItem(arr,n,key);
    if(position==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at location: "<<position+1;
    
    return 0;

}

//TC: O(N)