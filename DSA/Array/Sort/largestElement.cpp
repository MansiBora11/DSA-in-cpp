#include <iostream>
using namespace std;

int largest(int arr[],int n){
    int i;
    int max=0;
    for(i=1;i<n;i++){
       if(arr[i]>max)
            max=arr[i];       

    }
    return max;
}

int main(){
    int arr[4]={23,12,45,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << "Largest in given array is "
         << largest(arr, n);
    return 0;

}

//TC: O(N);