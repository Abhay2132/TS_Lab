#include<iostream>
#include "hlpr.hpp"
using namespace std;
using namespace hlpr;
int main(){
    _clrscr();
    int n;
    cout<<"array size : ";
    cin>>n;
    int arr[n];
    cout<<"elements   : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if((i+1)%2==0){
            continue;
        }else{
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}