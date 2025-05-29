#include <iostream> 
using namespace std; 

int main() { 

    int arr[] = {2, 4, 6, 9, 66, 7}; 

    int s= sizeof(arr)/ sizeof(arr[0]); 

    for (int i=0; i<s; i++) { 
        cout<< arr[i] <<"\t"; 
    } 
    cout<<'\n'; 

    int c=0; 
    for (int i=1; i<s; i++) 
    { 
         
        int min = i;  
        
        while (min>0 && arr[min] < arr[min-1])  
        {
            int sw; 
            sw = arr[min]; 
            arr[min] = arr[min-1]; 
            arr[min-1] = sw; 

            min --;  
             
        } 
        c++; 
    }
    cout<<"no of hits : "<<c; 
    cout<<"\n after sort \n"; 
    for (int i=0; i<s; i++) 
    { 
        cout<< arr[i]<<"\t"; 
    }

}









