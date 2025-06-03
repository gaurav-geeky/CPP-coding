
//  recursion . power of number.

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
    cout<< b*p <<"\t\t"; 
    k = b * power(b, p - 1);

    return k;
}


int main()
{
    int a, b;
    cout << "\nenter a number:  ";
    cin >> a;
    cout << "enterr pwer: ";
    cin >> b;

    cout << power(a, b);

}
