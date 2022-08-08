#include <iostream>
using namespace std;

int binarySearch(int arr[],int low,int high,int key);

int deleteElement(int arr[],int n,int key){
    int pos=binarySearch(arr ,0, n-1 ,key);
    int i;
    
    if(pos==-1){
         cout<<" element not found";
         return n;
    }
    for(i=pos;i<n-1;i++)
        arr[i]=arr[i+1];
    return (n-1);
}

int binarySearch(int arr[],int low,int high,int key){
    if(high<low)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;
    if(arr[mid]<key)
        return(arr,(mid+1),high,key);
    return(arr,low,(mid-1),key);
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int key=4;
    int n=sizeof(arr)/sizeof(arr[0]);

    cout << "\n Before deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    n=deleteElement(arr,n,key);
    cout << "\nafter deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}