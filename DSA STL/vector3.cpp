#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 

int main() { 
/*
    // insert elements  form start  or end;  

    vector<int>v1{1, 9 , 3, 11, 66, 7}; 
    sort(v1.begin(), v1.end()); 
    
    cout<<" \n vector in ascending order need no para     "; 
    for(auto k:v1) { 
        cout<<k<<"\t"; 
    } 
    sort(v1.begin(), v1.end(), greater<int>());  
    
    cout<<" \n vector in descend order need  para     "; 
    for(auto k:v1) { 
        cout<<k<<"\t"; 
    }
    */

    vector<int> v2 {3, 6, 12, 24, 48};  // new vector v2;  

    cout<<"\n  insert begin +1  :  "; 
    v2.insert( v2.begin() , 33); 

    for(int s: v2) { 
        cout<<s<<"\t"; 
    } 
    cout<<"\n size of v2 : "<<v2.size(); 

    // insert smt  in between elements  

    // vector<int>:: iterator it=v2.end(); 
    // v2.erase(it-1); 
    // cout<<"\n\n after eraseing  v2.erase(it-1) with iterator end  :  \n"; 
    
    vector<int>:: iterator ti=v2.begin(); 
    v2.erase(ti); 
    cout<<" \n after eraseing  v2.erase( ti) with iterator begin  :  \n"; 


    for (auto k: v2) { 
        cout<<k<<"\t"; 
    }
    

}















