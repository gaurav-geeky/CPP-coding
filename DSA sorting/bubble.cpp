#include <iostream> 
using namespace std; 

void bubbleSort ( int arr[], int n ) { 

    for(int i=0; i<n-1; i++) { 

        for(int j=0; j<n-2; j++) { 
            if (arr[j]> arr[j+1]) { 
                swap(arr[j], arr[j+1]); 
            }
        }
    }
}  

void printA (int arr[], int n) { 
    for (int i=0; i<n; i++) { 
        cout<< arr[i] << " "; 
    } 

}

int main() { 
    int n=5; 
    int arr[] = {3, 1, 5, 7, 8}; 

    bubbleSort(arr, n); 
    printA (arr, n); 
    return 0; 
}
 



