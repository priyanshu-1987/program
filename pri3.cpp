#include<iostream>
#include<string>
using namespace std;
int main(){
    string fullname;
    cout<<"enter your full name:";
    cin>>fullname;
    cout<<"your full name is:"<<fullname;
    cout<<endl;

    cin.ignore();

    string fullname1;
    cout<<"enter your full name:";
    getline(cin,fullname1);
    cout<<"your full name is:"<<fullname1;
}