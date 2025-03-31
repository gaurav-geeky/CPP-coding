#include <iostream> 
using namespace std; 

int main () {
int num; 
int mult=1; 
cout<<"enter num :"; 
cin>>num; 

for (int i=1; i<=num; i++) {
    mult=mult*i;  
}
    cout<<mult; 
}
