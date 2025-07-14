// Q1.  wap to find missing no in vector ?
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3, 5, 6, 10};
    vector<int> v0;

    cout << "Original values in v1 : ";
    for (auto k : v1)
    {
        cout << k << "\t";
    }

    for (int i = 1; i < v1.size(); i++)
    {
        while ((v1[i] - v1[i - 1]) > 1)
        {
            v1[i - 1]++;
            v0.push_back(v1[i - 1]);
        }
    }

    cout << "  \nall missing no in v1 :  ";
    for (auto k : v0)
    {
        cout << k << "\t";
    }

    vector<int> v2{5, 7, 10, 14, 17};
 
    cout << "\nOriginal values in v2 : ";
    for (auto k : v2)
    {
        cout << k << "\t";
    }

    cout << " \nall missing no in vector v2  : ";
    for (int i = 1; i < v2.size(); i++)
    {

        while ((v2[i] - v2[i - 1]) > 1)
        {
            v2[i - 1]++;
            cout << v2[i - 1] << "\t";
        }
    }
}
