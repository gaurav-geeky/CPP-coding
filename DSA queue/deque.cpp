#include <iostream> 
#include <deque> 
using namespace std; 

int main () { 
    deque <int>  q; 

    q.push_front(20); 
    q.push_front(34); 
    q.push_back(16); 
    q.push_back(9); 
    q.push_front(3);  

    for (auto  &k: q) 
    { 
        cout<< ++k << "\t"; 
    }
    cout << endl; 

    for (auto  t: q) 
    { 
        cout<< t << "\t"; 
    }
    cout << endl; 
    q.pop_back();   // delet from last
    q.pop_front();  // delet from  start; 

    for (auto p=q.begin(); p!=q.end(); p++) { 
        cout << *p << "\t"; 
    }
    cout << " \nsize= " << q.size() << endl; 

    deque <int> :: iterator it=q.begin(); 
    q.insert(it+2, 101);

    cout << "after insertion in middle th. iterator \n"; 
    for (auto  t: q) 
    { 
        cout<< t << "\t"; 
    }


    // insert data from middle : iterator. 
}

