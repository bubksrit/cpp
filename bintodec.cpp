#include<iostream>
using namespace std;
int bintodec(int n){
    int rem,i=1,decn=0;
    while(n>0){
        rem=n%10;
        decn+=rem*i;
        i=i*2;
        n=n/10;
    }
    return decn;
}
int main(){
    cout<<bintodec(110010);
    return 0;
}
