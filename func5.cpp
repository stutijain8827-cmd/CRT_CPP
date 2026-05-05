#include<iostream>
using namespace std;

int coffeeShots(int val){
    
    return val*30;
}
    int main(){
        int val;
        
        cout<<"Enter no. of Coffee Shots :"<<endl;
        cin>>val;
        cout<<coffeeShots(val)<<endl;
        return 0;
        
}
    

