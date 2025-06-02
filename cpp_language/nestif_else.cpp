#include <iostream> 
using namespace std; 

int main () {
string a; 
cout<<" what is site : "<<endl; 
cin>>a;  

if(a=="amazon") { 
    cout<<"product or service"<<endl; 
    cin>>a; 
    if(a=="product") {
        cout<<"yes it is product"; 
        cin>>a; 
        if(a=="mobile"){
                cout<<"nokia, samsung, java"<<endl;
        }
        else if (a=="laptop") {
                cout<<"it's dell, apple : "<<endl; 
        } 
        else {
            cout<<"no item like this"<<endl; 
        }


    }
    else if (a=="service") {
        cout<<"it is service"<<endl; 
    } 
    else {
        cout<<"invalid"; 
    }
}
else {
    cout<<"not a site : ";
}
}