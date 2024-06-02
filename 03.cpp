#include<iostream>

using namespace std;

int main(){

    int num1,num2;
    cin>>num1>>num2;

    cout<<"Values before swap"<<endl;
    cout<<num1<<" "<<num2<<" "<<endl;

    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;


    cout<<"Values After swap"<<endl;
    cout<<num1<<" "<<num2<<" "<<endl;

    

   
    return 0;
}