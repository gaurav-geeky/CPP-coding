// wap to find out min value in stack ? 

#include <iostream> 
#include <stack> 
using namespace std; 

int main () { 

    stack<int> st1;
    int ele =0; 

    st1.push(20);
    st1.push(1);
    st1.push(6);
    st1.push(32);
    cout << "top value: " << st1.top();
    cout << "\nsize of stack : " << st1.size() << "\n";


    while (!st1.empty()) // untill data, when empty stop; 
    {
        cout << st1.top() << "\n";
        st1.pop();   

        
    }  
    

}

// reverse the string  "sky is blue"; 

//  "blue is sky"; 

