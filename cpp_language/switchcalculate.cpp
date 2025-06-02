#include <iostream> 
using namespace std; 

int main()  { 
    int a; int b; 
    cout<<"entetr the required nos: "; 
    cin>>a>>b; 
    char op; 
    cout<<"enter the operator + - * / :  "; 
    cin>>op; 

    switch(op) {
        case '+': cout<<a+b; 
        break; 

        case '-': cout<<a-b; 
        break; 
        
        case '*': cout<<a*b; 
        break; 
        
        case '/': cout<<a/b; 
        break; 
        
        case '%': cout<<a%b; 
        break; 
        
        default: cout<<" invalid operator"; 

    }


}