#include<iostream>
using namespace std;
int decnum(int n){
    int rem,bn=0,i=1;
    while(n>0){
        rem=n%2;
        n=n/2;
        bn=bn+(rem*i);
        i=i*10;
    }
    return bn;
}
int main(){
    int n=50;       //output=110010
    cout<<decnum(n);
    return 0;
}