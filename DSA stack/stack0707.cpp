#include <iostream>
using namespace std;

class cybrom
{
public:
    int *arr;
    int n, top;
    //              constructor taking no of elements;
    cybrom(int a)
    {
        n = a;
        arr = new int[n];
        top = -1;
    }
    //                      function to add element push()
    void push(int v)
    {
        if (top == n - 1)
        {
            cout << "\n overflow \n";
            return;
        }
        top++;
        arr[top] = v;
    }
    //                        function to show top element top()
    int tops()
    {
        if (top == -1)
        {
            cout << "\nunderflow \n";
            return -1;
        }
        return arr[top];
    }
    //                          function to remove element pop()
    void pop()
    {
        if (top == -1)
        {
            cout << "\n there is no data";
            return;
        }
        top--;
    }
};

int main()
{

    int s;
    cout << "enter size of array\n";
    cin >> s;
    cybrom c(s);
    c.push(12);
    c.push(45);
    c.push(6);
    c.push(89);

    while (c.top != -1)
    {
        cout << c.tops() << "\n";
        c.pop();
    }

    // cout<<c.tops();
    // c.pop();
    // c.pop();
    // c.pop();
    // cout<< "\n top=" << c.pop();
}
