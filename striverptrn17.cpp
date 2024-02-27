#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
       int nsp=1;
       for(int nsp=0;nsp<n-i-1;nsp++){
        cout<<" ";
       }
       for(int j=0;j<=2*n-1;j++){
        cout<<"*";
       }
       cout<<endl;
    }
}