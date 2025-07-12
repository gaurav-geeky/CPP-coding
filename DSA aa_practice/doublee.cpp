#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l1{2, 39, 6, 10, 9};

    for (auto k : l1)
    {
        cout << k << "\t";
    }
    cout << endl;

    l1.push_back(77);
    for (auto k : l1)
    {
        cout << k << "\t";
    }
    cout << endl;

    l1.push_front(11);
    for (auto k : l1)
    {
        cout << k << "\t";
    }
    cout << endl;
    l1.pop_back();
    l1.pop_front();
    l1.reverse();
    for (auto k : l1)
    {
        cout << k << "\t";
    }
    cout << endl;
    l1.remove(39);
    for (auto k : l1)
    {
        cout << k << "\t";
    }

    // using lambda func we can remove multiple based on condition. 
    //  remove if takes function as a parameter. 

    l1.remove_if( [] (int a) {return a>9;});  
    
    cout<< "\n after remove if : \n"; 
    for (auto p:l1) { 
        cout<<p << "\t"; 
    }

}
