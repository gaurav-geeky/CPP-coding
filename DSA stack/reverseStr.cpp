#include <iostream>
#include <stack>
using namespace std;

void rev(string s)
{
    stack<string> stk;

    for (int i = 0; i < s.length(); ++i)
    {
        string wrd = "";

        while (s[i] != ' ' && i < s.length()) // can we apply 2 condi in while
        {
            wrd += s[i];
            i++;
        }
        stk.push(wrd);
    }

    while (!stk.empty())
    {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
}

int main()
{
    string s1 = "this is brazil";
    rev(s1);
}