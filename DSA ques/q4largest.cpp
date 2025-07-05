#include <iostream>
#include <string> 
#include <algorithm> 
using namespace std;

void large (string str, int s) { 

    int count = 0;  
    string largest = ""; 

    for ( int i=0; i<s; i++ ) { 

        if ( str[i] != ' ') { 
            count ++;  
            cout<<str[i];             

            if ( str[i] == ' ') { 
                count = 0;  
                cout<<" \n "; 
            } 
        }
        // cout<< " \nNo. of count: "<< count; 
       
        
    }
};  

int main()
{
    //  q4.  largest word in string  
    
    string s4 = "c++ is a general programming language"; 
    int s= s4.size(); 

    large(s4, s);  
}




