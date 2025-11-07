#include<iostream>
using namespace std;
int fact(int n){
    int f=1;
    if (n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n=5;
    int f=fact(n);
    cout<<f;
    return 0;
}