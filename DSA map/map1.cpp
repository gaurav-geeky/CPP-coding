#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<int, string> m1;

    m1[101] = "amit";
    m1.insert({102, "sunny"}); // list form
    m1.insert(make_pair(103, "ravi"));
    m1[99];

    for (auto k : m1)
    {
        cout << k.first << " , " << k.second << "\n";
    } 

    // deletion always according to key. 

    // find element using pointer and if find erase then    not found msj;  

    auto j = m1.find(105); 
    if (j != m1.end())
    { 
        m1.erase(j); 
    }
    else { 
        cout<< " \n data not found"; 
    }
    cout << endl; 
    for (auto k : m1)
    {
        cout << k.first << " , " << k.second << "\n";
    } 

    cout << "  \n max size = " << m1.max_size() << "\n"; 


}