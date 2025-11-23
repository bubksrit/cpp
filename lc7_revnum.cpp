#include<iostream>
using namespace std;


    int reverse(int x) {
        int revn=0;
        while(x>0){
            int rem=x%10;
            revn=revn*10+rem;
            x=x/10;
        }
        return revn;
        
    }
    int main(){
        int x;
        cout<<"enter number";
        cin>>x;
        if(x>0)
        cout<<"reverse="<<" "<<reverse(x);
        else
        cout<<"reverse=-"<<" "<<reverse(-x);

        return 0;
    }