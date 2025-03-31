#include <iostream> 
using namespace std; 

int main () 
{
    int a; 
    cout<<"enter year : "<<endl; 
    cin>>a; 

    if( (a%4==0 && a%100!=0) || (a%400==0)) {
            cout<<"it is leap year: "<<endl; 
    }
     
    else  {
            cout<<" not a leap year:  "<<endl;
    }
    
}