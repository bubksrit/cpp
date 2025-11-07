#include<iostream>
using namespace std;
int sumd(int n){
    int s=0;
     int rem;
    while (n>0){
    rem=n%10;
    n=n/10;
    s+=rem;}
    return s;
}
int main(){
    int n=1111;  //output=4
    cout<<sumd(n);
    return 0;
}