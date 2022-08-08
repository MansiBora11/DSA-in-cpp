#include<iostream>
using namespace std;

void fun1(int n){
    if(n==0){
        return ;
    }
    cout<<"gfg"<<endl;
    fun1(n-1);
}

int main(){
    int n;
    fun1(2);
    return 0;
}
