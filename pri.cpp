#include<iostream>
using namespace std;
int main(){
    //string str="We are the so-called "Vikings" from the north."; it generate error
    string str1="We are the so-called \"Vikings\" from the north.";
    string str2= "It\'s alright.";
    string str3="The character \\ is called backslash.";
    //cout<<str<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
}