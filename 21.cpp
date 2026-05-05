#include<iostream>
using namespace std;
int main(){
    int a;
    int fact =1;
    cout<<"Enter a number to calculate its factorial :"<<endl;
    cin>>a;
    
    for(int i =1;i<a;i++){
        fact *= i;
    }
        cout<<fact<<endl;
    
    return 0;
}