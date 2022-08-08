#include <iostream>
// #include <cmath>
using namespace std;

// Naive method TC: O[N^2]
// bool isSorted(int arr[], int n)
// {
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = i + 1; j < n; j++)
// 		{
// 			if(arr[j] < arr[i])
// 				return false;
// 		}
// 	}

// 	return true;
// } 

    
// int main() {
	
//       int arr[] = {7, 2, 30, 10}, n = 4;
      
//       printf("%s", isSorted(arr, n)? "true": "false");
    
// }

//Efficient method TC: O[N]

bool issorted(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}

int main(){
    int arr[]={23,45,12,35};
    int n=4;
    printf("%s", issorted(arr, n)? "true": "false");
}