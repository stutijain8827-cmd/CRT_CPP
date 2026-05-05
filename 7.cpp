#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter variables :"<<endl;
    cin>>a;

    cout<<"Enter 2nd variable :";
    cin>>b;
    temp = a;
    a = b;
    b = temp;
    cout<<"After swapping"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}