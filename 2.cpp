#include<iostream>
using namespace std;
int num;
int main(){
    int input;
    double result;

    num = 200;
    cout<<"Enter an integer value :";
    cin>>input;
    result = (double)num/input;
    cout<<"Result after division :"<<result<<endl;
    return 0;
}
