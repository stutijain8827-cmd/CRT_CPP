#include<iostream>
#include<string>

using namespace std;
int main(){
    const string CORRECT_USER = "Admin";
    const string CORRECT_PASSWORD = "password 123";
    string user_input,pass_input;
    cout<<"Enter username :";
    cin>>user_input;
    cout<<"Enter password :";
    cin>>pass_input;
    if (user_input == CORRECT_USER && pass_input == CORRECT_PASSWORD){
        cout<<"Valid"<<endl;

    }else{
        cout<<"Invalid"<<endl;

    }
    return 0;
}
