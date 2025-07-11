#include <iostream>
#include <stack>
using namespace std;

void reverse(string s)
{
    // reverse of string

    cout << "original string: " << s << "\n";

    stack<string> st;

    for (int i = 0; i < s.length(); ++i)
    {
    string store = ""; 
    // when store outside : madamdeputychairman  madamdeputy  madam ?

        while (s[i] != ' ' && i < s.length())
        {
            store += s[i];
            i++;
        }
        st.push(store);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{

    string s1 = "madam deputy chairman";

    reverse(s1);
}
