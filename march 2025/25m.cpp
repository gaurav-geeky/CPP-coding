#include <iostream> 
using namespace std; 

int main () 
{ 
    int arr[]={1, 22, 3, 46, 4, 5}; 
    
    for(int i=0; i<6; i++) {  
        
        for (int j=i+1; j<6; j++) { 
            
            if (arr[j]>arr[i]) { 
                
                int t=arr[i]; 
                arr[i]=arr[j]; 
                arr[j]= t; 
            }
        }
    } 
    
    for(int i=0; i<6; i++) { 
        cout<<arr[i]<<"\t";  
    }

}