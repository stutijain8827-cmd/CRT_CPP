#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter the age : "<<endl;
    cin>>age;
    if(age>18){
        cout<<"Eligible to vote"<<endl;
    }
    else if(age>100){
        cout<<"Century,Eligible to vote :"<<endl;

    }

    else if (age<=17){

    cout<<"Not eligible to vote"<<endl;

}
else if (age<0){
    cout<<"Invalid"<<endl;
}
return 0;
}