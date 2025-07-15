//  merge sort : first break give array using mid value till single element then merge using pointers.

//  int j = mid + 1; ____ because 0th element when /2 __ 1/2. it become zero as 1<2 so +1 agey khade ho ja.  17..

//  int k = low;  _____ for array b where data which is copied will come here. 
#include <iostream>
using namespace std;

void merges(int arr[], int low, int mid, int high)
{
    int b[high + 1];
    
    int i = low;
    int j = mid + 1;  
    int k = low;  

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = b[i];
    }
} 

void msort(int arr[], int low, int high) 
{ 
    int mid; 
    if (low < high) 
    {
        mid = (low + high)/2; 
        msort(arr, low, mid); 
        msort(arr, mid+1 , high); 
        merges(arr, low, mid, high); 
    }
}

int main() 
{ 
    int arr[] = {6, 8, 1, 2, 4, 3, 9, 5};  
    int s = sizeof(arr) /sizeof(arr[0]); 

    for (int i=0; i<s; i++)
    {
        cout<< arr[i] <<"\t"; 
    } 

    msort(arr, 0, s-1); 
    cout<<"\n After applying merge sort \n"; 

    for (int i=0; i<s; i++) 
    { 
        cout<< arr[i] << "\t"; 
    }
}