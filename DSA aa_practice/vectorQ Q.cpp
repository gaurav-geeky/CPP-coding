//  ##Q.2 Remove dulicate Element from sorted array #

#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> p{1, 1, 1, 2, 2, 3, 3, 4, 5};
    vector<int> v; 

    for (int i = 0; i < p.size(); i++)
    {
        if (p[i] != p[i + 1])
        {
            v.push_back(p[i]);
        }
    }
    for (auto x : v)
    {
        cout << x << "\t";
    }
}
