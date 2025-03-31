#include <iostream> 
using namespace std; 

int main() 
{
    string a; 
    cout<<"house no. :"<<endl; 
    cin>>a; 

    if(a=="house1") {
        cout<<"it is house 1"<<endl; 
        cin>>a; 
        if(a=="house2") {
            cout<<"it is house 2";  
            cin>>a; 
            if(a=="house3") {
                cout<<"reached house 3";   
            } 
            else {
                cout<<"it is inv house";
            }
        } 
        else {
            cout<<"invalid ";
        }
    } 
    else if (a=="house3"){ 
        cout<<"it is house 3"<<endl; 
    } 
    else {
        cout<<"invalid"<<endl; 
    }

}