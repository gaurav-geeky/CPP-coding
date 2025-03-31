#include <iostream> 
using namespace std;   //traffic red,  green,   yellow

int main() {
    string a; 
    cout<<"which light :"; 
    cin>>a; 

    if(a=="red") {
        cout<<"stop";
    }
    else if(a=="green") {
        cout<<"go";
    }
    else if(a=="yellow") {
        cout<<"wait";
    }
    else  {
        cout<<" invalid";
    }
}