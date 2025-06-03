
//  recursion . power of number.    then  table in function.  

#include <iostream>
using namespace std;

int power(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return 1;
    }

    int k; 
    k = b * power(b, p - 1);

    return k;
}

void table(int num, int ind)
{
    if (ind > 10)
    {
        return ;
    }

    int k;
    k = num * ind;
    cout << k << "\t";

    table(num, ind+1);
}

int main()
{
    int a, b;
    cout << "\nenter a number:  ";
    cin >> a;
    cout << "enterr pwer: ";
    cin >> b;

    cout << power(a, b);

    int x; 
    cout << "\n\n enter digit : ";
    cin >> x;

    table(x, 1);
}
