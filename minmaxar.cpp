#include<iostream>
using namespace std;
#define m 5
int maxel(int ar[]){
    int max=ar[0];
    for(int i=0;i<m;i++){
        if (ar[i]>max)
        max=ar[i];
    }
    return max;
}
int minel(int ar[]){
    int min=ar[0];
    for(int i=0;i<m;i++){
        if (ar[i]<min)
        min=ar[i];
    }
    return min;
}
int main(){
    int ar[m];
    cout<< "enter elements for the array\n";
    for(int i=0;i<m;i++)
    cin>>ar[i];
    cout<<maxel(ar);
    cout<<minel(ar);
    return 0;
}