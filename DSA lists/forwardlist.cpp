#include <iostream> 
#include <forward_list> 
using namespace std; 

int main() { 

    forward_list <int> f; 
    f.push_front(20); 
    f.push_front(40); 
    f.push_front(30); 
    f.push_front(12);  

    for (auto  p:f) { 
        cout<< p << "\t"; 
    } 
    f.pop_front(); 

    cout<< "\nafter deletion  \n"; 
    for (auto  p:f) { 
        cout<< p << "\t"; 
    }  

    f.sort();  // ascending 
    cout<< "\n data sort f : "; 
    for (auto  p:f) { 
        cout<< p << "\t"; 
    }  

//          forward_list  f2

    cout<< "\n\n  f2 : "; 
    forward_list <int> f2 {30, 33, 34, 30, 78}; 
    for (auto  p:f2 ) { 
        cout<< p << "\t"; 
    } 
    cout << "\n f2 sort unique : "; 
    f2.sort(); 
    f2.unique(); 
    cout<< "\n unique values f2 : \n"; 
    for (auto  p:f2) { 
        cout<< p << "\t"; 
    } 
    cout<< "\n f3 : ";  

    //          forward_list  f3 

    forward_list <int> f3 {100, 50, 45, 13}; 
    for (auto  p:f3) { 
        cout<< p << "\t"; 
    } 

    f.sort(); 
    f3.sort(); 
    f.merge(f3); 

    cout<< "\n after merging f to f3 \n"; 
    for (auto  p:f) { 
        cout<< p << "\t"; 
    } 

    f.reverse (); 
    cout<<"\n reverse f : "; 
    for (auto  p:f) { 
        cout<< p << "\t"; 
    } 

    cout << "size of f = "; 
    cout << std:: distance(f.begin(), f.end()); 
    
}