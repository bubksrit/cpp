#include<iostream>
using namespace std;
int main(){
    char n='A';
    for (int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<n;
        }
        cout<<endl;
        n++;
    }
    return 0;
}