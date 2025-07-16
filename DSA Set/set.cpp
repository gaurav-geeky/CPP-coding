#include <iostream> 
#include <set> 
#include <unordered_set> 
using namespace std; 

int main() { 
    set <string> s1 {"pen", "eraser", "pencil", "sharpner"};

    for (auto k: s1) { 
        cout << k << "\t"; 
    } 
    cout << endl; 
    multiset <int> s; 
    s.insert(23); 
    s.insert(45); 
    s.insert(98); 
    s.insert(76); 
    s.insert(25); 
    s.insert(23); 

    for (auto p: s) { 
        cout << p << "\t"; 
    } 
 
   s.erase(23);  //  erarse 23
   cout << "  \n after erase 23 \n"; 
   for (auto p: s) { 
        cout << p << "\t"; 
    } 
    

    auto p = s.find(100); 
    if (p != s.end())
    { 
        s.erase(p);  // here earse 45
    }
    else { 
        cout << "\n data not found \n"; 
    }
    
    cout << " \n after find n delete  45 \n"; 
    for (auto p: s) { 
        cout << p << "\t"; 
    } 

    cout << endl<< endl; 
    multiset<int> multi; // Declare a multiset of integers

    // Inserting elements into the multiset
    multi.insert(11);
    multi.insert(22);
    multi.insert(33);
    multi.insert(77);
    multi.insert(11);  

    for (auto k: multi) { 
        cout << k << "\t"; 
    }

}