#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
       int nsp=0;
       for(int nsp=0;nsp<i;nsp++){
        cout<<" ";
       }

       for(int j=0;j<2*n-(2*i+1);j++){
        cout<<"*";
       }
       cout<<endl;
    }
}