#include <iostream> 
#include <queue> 
using namespace std; 

int main () { 
    queue <int>  q; 

    q.push(20); 
    q.push(34); 
    q.push(16); 
    q.push(9); 
    q.push(3);  

    cout << "size= " << q.size() << endl; 
    cout << "last element = " << q.back() << endl; 

    while (! q.empty()) { 
        cout << q.front() << endl; 
        q.pop();
    } 
}

