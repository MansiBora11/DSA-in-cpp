#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v{10,5,21};
    for(int x: v)
        cout<<x<<" ";
    return 0;
}