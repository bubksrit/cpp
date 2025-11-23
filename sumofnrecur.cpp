#include<iostream>
using namespace std;
int sum=0;
int sumofn(int n){
    if(n<1)
    return 0;
    sum+=n;
    sumofn(n-1);
    return sum;
}
int main(){
    cout<<sumofn(3);
    return 0;
}