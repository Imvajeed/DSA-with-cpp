#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100],size=0;
    int num;

    while(cin>>num){
        arr[size]=num;
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        if(arr[i]%3==0 && arr[i]%5==0){
            cout<<"ThreeFive"<<" ";
        }else if(arr[i]%3==0){
            cout<<"Three"<<" ";
        }else if(arr[i]%5==0){
            cout<<"Five"<<" ";
        }else{
            cout<<arr[i]<<" ";
        }
    }
    

    return 0;
}