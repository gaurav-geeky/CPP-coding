// Q2.  remove duplicate value in a vector ?

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vd{1, 1, 1, 2, 2, 3, 3, 4, 5};

    cout << "  \nOriginal vector vd : ";
    for (auto k : vd)
    {
        cout << k << "\t";
    }

    cout << "   \nremoving duplicate : ";
    for (int i = 0; i < vd.size(); i++)
    {
        for (int j = i+1; j < vd.size(); j++)
        {
            if (vd[i] == vd[j])
            {
                vd[j] = -1;
            }
        }

        if (vd[i] != -1)
        {
            cout << vd[i] << "\t";
        }
    }

}