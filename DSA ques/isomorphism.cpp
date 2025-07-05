#include <iostream>
#include <algorithm>
using namespace std;

int iso(string s1, string s2)
{
    int n1[256] = {-1};
    int n2[256] = {-1};

    if (s1.size() != s2.size())
    {
        return false;
    }
    else
    {
        for (int i = 0; i < s1.size(); i++)
        {
            if (n1[s1[i]] != n2[s2[i]])
            {
                return false;
                break;
            }
        }
    }
    return true;
}


int main() { 
    string s1 = "add"; 
    string s2 = "lop"; 

    bool c=iso(s1, s2); 
    if (c)
    { 
        cout<<"Isomorphic"; 
    }
    else 
    { 
        cout<<"Not isomorphic"; 
    }

}
