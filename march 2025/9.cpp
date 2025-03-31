#include <iostream> 
using namespace std; 

int main() { 
    
    int arr[]={10, 4, 6, 3, 1, 2, 5, 7, 8, 9};    
    
    
    for (int i=0; i<10; i++) { 
        for (int j=i+1; j<10; j++) { 
            if (arr[j]<arr[i]) { 
                
                int c=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]=c;                   
            }
        }
    } 
    cout<<"ascending :  ";
    for (int i=0; i<10; i++) { 
        cout<<arr[i]<<"\t"; 
    } 
}