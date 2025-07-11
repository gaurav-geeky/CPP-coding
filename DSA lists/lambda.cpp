#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int grt(int a, int b) { return a > b; }

int main()
{

    cout << [](int a, int b)
    { return a > b; }(4, 3);
    cout << "\n";
    cout << grt(5, 20); // bool value always;
    cout << endl;
    
    vector<int> v{4, 2, 8, 5, 10};
    sort(v.begin(), v.end(), [](int a, int b)
         { return a > b; });

    for (auto p : v)
    {
        cout << p << "\t";
    }
}