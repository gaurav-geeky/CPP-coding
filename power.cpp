#include <iostream> 
using namespace std; 

int main() { 
    int num, power, ans=1; 

    cout<<"enter number: "; 
    cin>>num; 
    cout<<"enter power: "; 
    cin>>power;  

    for (int i=1; i<=power; i++) { 
        ans=ans*num; 
    }
    cout<<ans; 
}
