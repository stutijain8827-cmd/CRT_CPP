#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the sides";
    cin>>a>>b>>c;
    bool isEquilateral = (a==b)&&(b==c);
    if(isEquilateral){
    cout<<"True";

    }else{
    
    cout<<"False";
    }
    return 0;
}
