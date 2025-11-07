#include<iostream>
using namespace std;
int fact(int n){
    if (n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}
int binomialcoff(int n,int r){
   int fn=fact(n);
   int fr=fact(r);
   int fnr=fact(n-r);
   int res= fn/(fr*fnr);
   return res;
}
int main(){
    int n=8,r=2;
    cout<<binomialcoff(8,2);
    return 0;
}