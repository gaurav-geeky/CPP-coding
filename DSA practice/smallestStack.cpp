#include <iostream>
#include <stack>
using namespace std;

int min(stack<int> st1)
{
    int min;

    if (st1.empty())
    {
        cout << "stack is empty";
        return -1;
    }

    if (st1.size() == 1)
    {
        return st1.top();
    }

    min = st1.top();
    st1.pop();

    while (!st1.empty())
    {
        cout << st1.top() << "      ";

        if (st1.top() < min)
        {
            min = st1.top();
        }
        st1.pop(); 
        cout<< "min: " << min << "..."; 
    }
    // cout<< " \nso min. value in above stack : \n";
    return min;
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(1);
    s.push(22);
    s.push(3);
    s.push(78);

    min(s);

    return 0;
}














