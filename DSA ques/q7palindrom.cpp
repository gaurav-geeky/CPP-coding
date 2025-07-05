#include <iostream>
#include <string>
#include <array>
#include <algorithm> 
using namespace std;

int main()
{
    //  q1.  check given string is palindrome or not. 

    string s7 = "naman";  //  string
    
    int i=0; 
    int j = s7.length()-1;  // it is last indexing. 

    for (int i=0;  i<=j;  i++) { 
        cout<< s7[i] << "\t"; 
    } 
    cout<< "\n now check palindrome : \n";

    while( i < j ) { 

        if (s7[i] != s7[j]) { 
            cout<< " not palindrome: ";  
            return 0; 
        } 
        i++; 
        j--; 
    } 
    cout<< " yes it's palindrome: ";  
 
} 




