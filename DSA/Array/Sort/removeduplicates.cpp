#include<iostream>
using namespace std;

int remdpts(int arr[],int n){
    int temp[n];
    temp[0]= arr[0];
    int res=1;
    int i; 

    for(i=1; i<n; i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
            
    }

    for(i=0; i<res; i++){
        arr[i]=temp[i];
    }
    return res;

}

int main(){
    int arr[]={10,20,20,30,30,30};
    int n=6;
    cout<<"Before removing: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    n=remdpts(arr,n);
    cout<<"After removing: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}