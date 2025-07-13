#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> f1;

    f1.push_front(9);
    f1.push_front(91);
    f1.push_front(5);
    f1.push_front(15);
    f1.push_front(91);
    f1.push_front(1);

    cout << "ele of f1: " << "\n";
    for (auto k : f1)
    {
        cout << k << "\t";
    }
    cout << "\n";
    //      o/p looks like stack but not  each element comes before previous 1
    //        each ele come in front / previous of last 1.

    f1.pop_front();
    f1.sort();

    for (int s : f1)
    {
        cout << s << "\t";
    }
    cout << endl;

    f1.unique();
    for (auto k : f1)
    {
        cout << k << "\t";
    }
    cout << endl;

    // f1.reverse();
    // for (auto k : f1)
    // {
    //     cout << k << "\t";
    // }
    // cout << "\n";

    forward_list<int> f2;
    f2.push_front(10);
    f2.push_front(25);
    f2.push_front(20);
    f2.push_front(50);

    cout << "elements of f2: " << endl;
    for (auto k : f2)
    {
        cout << k << "\t";
    }

    cout << "\n sorted f2 :";
    f2.sort();
    for (auto k : f2)
    {
        cout << k << "\t";
    }

    cout << "\n  now after merge f2 in f1 \n";
    f1.merge(f2);
    for (auto k : f1)
    {
        cout << k << "\t";
    }
}

