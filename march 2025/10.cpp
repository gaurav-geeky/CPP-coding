#include <iostream>
using namespace std; 

int main() { 
    
    arr[]={1,3,5,7,9}; 
    
    int s=sizeof(arr)/sizeof(arr[0]); 
    cout<<"size of arr: "<<s; 
    
    for (int i=0; i<s; i++) { 
        int t=arr[i]; 
        arr[i]=arr[s-1]; 
        arr[s-1]=t; 
    } 
    for (int i=0; i<s; i++) { 
        cout<<arr[i]<<"\t"; 
    }
    
}