#include <iostream>
#include <list>
using namespace std;

int main()
{

    list<int> l1{20, 34, 12, 78};

    for (auto p : l1)
    {
        cout << p << "\t";
    }

    l1.push_front(100);
    l1.push_back(200);
    cout << "\nafter push front n back : \n";

    for (auto p : l1)
    {
        cout << p << "\t";
    }

    l1.pop_back();
    cout << "  \nafter pop back  : \n";

    for (auto p : l1)
    {
        cout << p << "\t";
    }

    l1.pop_front();
    cout << "  \nafter pop front  : \n";

    for (auto p : l1)
    {
        cout << p << "\t";
    }

    l1.reverse();
    cout << "  \nafter reverse  : \n";

    for (auto p : l1)
    {
        cout << p << "\t";
    }
}

