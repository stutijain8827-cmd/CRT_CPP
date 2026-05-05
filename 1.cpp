#include<iostream>
using namespace std;
int main(){
    float temp,fahrenheit;
    cout<<"Enter the temperature :";
    cin>>temp;

    fahrenheit = (temp*9/5)+32;
    cout<<"Temperature in fahrenheit :"<<fahrenheit<<endl;
    return 0;

}