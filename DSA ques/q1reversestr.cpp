#include <iostream>
#include <string>
#include <array>
#include <algorithm> 
using namespace std;

int main()
{
    //  q1.  reverse give string

    string s1 = "cybrom"; 
    int s = s1.size(); 

    for (int i=0; i<s; i++) { 
        cout<< s1[i] << "\t"; 
    } 
    cout<< "\nreverse of string : \n";

    for (int i=(s-1);  i>=0;  i--) { 
        cout<< s1[i] << "\t"; 
    } 
    
}




