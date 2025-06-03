
//   RECURSION __ func calling itself, it takes 2 parameter - base cond, recur relationship,  

#include <iostream> 
using namespace std; 

void tail (int a) { 


    if (a == 0) { 
        return; 
    } 

    tail (a-1);  //  tail recursion _ 1, 2, 3,
    cout<< a<< "\n";
}

void head (int a) { 

    if (a == 0) { 
        return; 
    } 

    cout<< a<< "\n"; 
    head (a-1);  //  head recursion _ 3, 2, 1, 
}

int main() { 
    int a; 
    cout<<"enter no a: "; 
    cin>>a; 

    tail(a);  
    cout<<"\n\n"; 
    head(a); 

}







