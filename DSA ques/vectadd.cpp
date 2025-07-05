#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int main() { 

    vector<int> v1{1, 5, 3, 2}; 
    vector<int> v2{7, 2, 1, 3, 5, 4, 1}; 

    v1.insert(v1.begin(), 0); 
    v1.insert(v1.begin(), 0); 
    v1.insert(v1.begin(), 0); 
    
    for (auto k:v1) { 
        cout<<k<<"\t"; 
    } 
    
}



