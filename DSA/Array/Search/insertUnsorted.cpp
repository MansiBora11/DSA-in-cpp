//Inserting at the end in unsorted array
#include <iostream>
using namespace std;

int insertItem(int arr[],int n,int key,int capacity){
    if(n>=capacity)
    return n;
    arr[n]=key;
    return (n+1);

}
int main(){
    int arr[24]={23,12,32,54,67,34};
    int n=6;
    int key=88;
    int capacity=sizeof(arr)/sizeof(arr[0]);

    cout<<"before inserting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    
    n=insertItem(arr,n,key,capacity);
    cout<<"after inserting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}

//TC: O(1)