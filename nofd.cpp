#include<iostream>
using namespace std;
int tnod(int n ){
    int c=0;
    while(n>0){
        n=n/10;
        c++;
    }
    return c;
}
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    cout<<tnod(n);
    return 0;
}