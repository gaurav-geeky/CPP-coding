#include <iostream>
#include <array>
using namespace std;

int main()
{

    array<int, 5> a1{2, 5, 8, 11, 9};
    array<int, 5> a2{20, 30, 40, 60};

    cout << "size of vec a1_____ " << a1.size() << "\n now a1 values \n";

    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1.at(i) << "\t";
    }

    cout << "\n first value of a1 : " << a1.front() << "\n";
    cout << "\n last value of a1 : " << a1.back() << "\n";

    cout << "size of vec a2_____ " << a2.size() << "\n now a2 values \n";

    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2.at(i) << "\t";
    }

    cout << "\n first value of a2 : " << a2.front() << "\n";
    cout << "\n last value of a2 : " << a2.back() << "\n";

    a1.swap(a2);
    cout << "\n values after swap of a1 and  a2 \n";
    cout << "\n after swap first array a1: \n";

    for (int i = 0; i < a1.size(); i++)
    {
        cout << a1.at(i) << "\t";
    }

    cout << "\n after swap 2nd array a2: \n";

    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2.at(i) << "\t";
    }

    a2.fill(199);
    cout << "\n  second array a2 afer fill \n";

    for (int i = 0; i < a2.size(); i++)
    {
        cout << a2.at(i) << "\t";
    }

    if (a2.empty())
    {
        cout << "\n a2 is empty array: ";
    }
    else
    {
        cout << "\n array a2 not empty";
    }

    //
    //
}
