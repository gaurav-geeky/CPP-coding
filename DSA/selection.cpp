//  selection sort  17 may, 2025.  

#include <iostream> 
using  namespace std; 

void selection (int arr[], int s) { 
    int c=0; 
    bool check; 

    for (int i=0; i<s-1; i++) { 
        int min = i; 

        check = false; 

        for (int j=i+1; j<s; j++) { 
            if ( arr[j] < arr[min]) { 
                min = j; 
            }
        } 
        
        c++; 

        if ( min != i) { 
            swap(arr[min], arr[i]);  
            check = true; 
        } 

        if (check == false) { 
            break; 
        }
    }  
    cout<<"no of count: "<<c<<endl; 
}

void printArr ( int arr[], int s) { 
    for (int i=0; i<s; i++) { 
        cout<<arr[i]; 
    }
}

int main() { 
    int arr[] = {1, 3, 2, 6, 7}; 
    int s = 5; 

    selection( arr, s ); 
    printArr (arr, s); 

}

