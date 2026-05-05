#include<iostream>
using namespace std;
 int areaofRectangle(int a, int b){
    return 2*(a+b);
 }
 int main(){
    int a,b;
    cout<<"Enter length :"<<endl;
    cin>>a;
    cout<<"Enter Width :"<<endl;
    cin>>b;
    cout<<"Area of rectangle is : "<<areaofRectangle(a,b)<<endl;
    return 0;

 }