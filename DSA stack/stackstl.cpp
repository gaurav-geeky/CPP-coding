#include <iostream>
using namespace std;

class cybrom { 

    public: 
    int *arr; 
    int n, top;     // because stack last in fst out.    top first out. 

    // const.  
    cybrom (int a)  { 
        n = a; 
        arr = new int[n]; 
        top = -1; 
    } 

    void push (int v) { 
        if (top == n-1 ) { 
            
            cout<< "\n overflow \n"; 
            return; 
        } 
        top++; 
        arr[top] = v; 
    }

    int tops () { 
        if (top == -1)
         { 
            cout<<"\n underflow \n"; 
            return -1; 
        } 
        return arr[top]; 
    } 

    void pop() { 
        if ( top == -1)
        { 
            cout<< "ther no data"; 
            return; 
        } 
        top--; 
    }
};    

int main() { 

    int s; 
    cout<< "enter size of array \n"; 
    cin>>s; 
    cybrom c(s); 
    c.push(12);
    c.push(33);
    c.push(51);
    c.push(78); 

    while (c.top != -1) { 
        cout<< c.tops() << "\t"; 
        c.pop(); 
    }

}


