#include<iostream>
using namespace std;
int main(){
    int n=4;
    for (int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
        cout<<" ";}
        if (i>1)
        cout<<"*";
        for(int j=0;j<(2*i-1);j++)
        {
        cout<<" ";
       
        }
      cout<<"*";
     cout<<endl;

    }
    
    for (int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
        cout<<" ";}
        if (i<n-1)
        cout<<"*";
        for(int j=(2*n-1);j>(2*i);j--)
        {
        cout<<" ";
        }
        if (i<n)
      cout<<"*";
     cout<<endl;

    }
    
    return 0;
}