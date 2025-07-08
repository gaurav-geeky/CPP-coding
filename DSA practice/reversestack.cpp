#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string s1 = "sky is blue";
    
    stack <string> st;

    for (int i = 0; i < s1.length(); i++)
    {
        string b=""; 

        if (s1[i] != ' ' && i< s1.length())
        {
            b += s1[i]; 
            i++; 
        }

        st.push(b); 
    }  

    while (! st.empty()) { 
        cout<< st.top() << " "; 
        st.pop(); 
    } 
    cout<< endl; 

}