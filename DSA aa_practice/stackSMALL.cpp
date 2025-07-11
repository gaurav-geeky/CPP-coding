#include <iostream> 
#include <stack> 
using namespace std; 

int main () { 

    stack <int> st1; 

    st1.push(6); 
    st1.push(34); 
    st1.push(4); 
    st1.push(30); 
    st1.push(57);  

    cout<< "\ntop value of stack: " << st1.top() <<endl;  

    int min; 

    while (!st1.empty()) 
    { 
        if ( st1.top() < min ) 
        { 
            min = st1.top(); 

        } 
        
        cout << st1.top() << "  "; 
        st1.pop(); 
    }   

    cout<< "\n so min value : " << min; 

} 




