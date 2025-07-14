#include <iostream>
#include <map>
using namespace std;

// occurance or frequency count; 

int main()
{
    int n1;
    string s; // each course;
    cout << "enter how many course \n";
    cin >> n1; // no of course

    map <string, int> mp;

    for (int i = 0; i < n1; i++)
    {
        cout << "enter course name \n";
        cin >> s;

        mp[s]++;  // here each course s will come and ++ 
    }

    for (auto k : mp)
    {
        cout << k.first << " = " << k.second << "\n";
    }
}
