#include <iostream>
using namespace std; 

int main () 
{
    int a; int b;  char op; 
    cout<<"enter the nos : "<<endl; 
    cin>>a>>b; 
    cout<<"enter operator + -  /  *: "<<endl;
    cin>>op; 

    if(op=='+') {
        cout<<a+b; 
    } 
    else if(op=='-') {
        cout<<a-b; 
    } 
    else if(op=='*') {
        cout<<a*b; 
    } 
    else if(op=='/') {
        cout<<a/b; 
    } 
    else if(op=='%') {
        cout<<a%b; 
    }
    else  {
        cout<<"invalid chr:  "<<endl; 
    } 

}