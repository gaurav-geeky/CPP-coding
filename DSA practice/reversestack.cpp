#include <iostream>
#include <stack>
using namespace std;

void rev(string s)
{
    cout<< "original string : " << s;  
    cout<< "\n"; 
    stack<string> st;

    for (int i = 0; i < s.length(); ++i)
    {
        string wrd= "";

        while (s[i] != ' ' && i < s.length())
        {
            wrd += s[i];
            i++; 
            cout<< "\n in loop wrd : " << wrd << "\n"; // inside loop each letter adds 1 by 1, if "  " breaks; 
        } 

        cout<< "wrd string: " << wrd << "\n"; // out of loop letter adds up to a word. 
        st.push(wrd);
    }

    while (!st.empty()) // stack runs from backward till empty. 
    {
        cout << st.top() << " ";
        st.pop();
    } 
    cout<< endl; 
}

int main()
{
    string str = "singh is king"; 
    
    rev(str);
}

