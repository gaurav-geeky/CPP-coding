//      bubble sort chall.  s =0 error, s=1  size must 2,   max size 10 .

#include <iostream>
using namespace std;

void bubbbling(int arr[], int s)
{
    int c = 0;

    for (int i = 0; i < s; i++)
    {
        if (s == 0)     //       condi 1   if size is zero : error; 
        {
            cout << "error "<<endl;
            break;
        }
        else if (s == 1)        //  condi 2   if size is one :   must be 2 ; 
        {
            cout<<"size must be 2 "<<endl;  
            break; 
        } 
        else if (s > 10)        //   condi 3    size should not exceed 10 ; 
        { 
            cout<<"max size is 10, array overloading "<<endl; 
            break; 
        } 

        for ( int j=0; j<s-1; j++) 
        { 
            if (arr[j] > arr[j+1]) 
            { 
                swap(arr[j], arr[j+1]); 
            }
        }
    }
} 

void arrayPrint (int arr[], int s) 
{ 
    cout<<"bubbled Array: "<<endl; 
    for (int i=0; i<s; i++) { 
        cout<<arr[i]<<"  "; 
    }
} 

int main () 
{ 
    int run[6] = {23, 5, 1, 9, 19, 8}; 

    bubbbling( run, 6); 
    arrayPrint( run, 6); 
}








































