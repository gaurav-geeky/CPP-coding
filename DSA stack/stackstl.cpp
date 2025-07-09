// stack without inbuild method . make function 

#include <iostream> 
using namespace std; 

class cybrom
{ 
    public: 
        int *arr; 
        int n, top; 
//  const to  create    objects 
        cybrom (int a) { 
            n = a; 
            arr = new int[n];  
            top = -1; 
        } 
//                               this function  to add  values in array
        void push (int v) { 
            if (top == n-1) 
            { 
                cout << "\n overflow \n"; 
                return; 
            } 
            top++; 
            arr[top] = v; 
        }
//                           this function to show  value ___ upper >>  lower  
        int showtop () { 
            if (top == -1) { 
                cout<< "\n under flow \n"; 
                return -1; 
            } 

            return arr[top]; 
        }
//                        this function only for loop down   stack  upper >>>>  lower
        void pop () { 
            if (top == -1)
            { 
                cout<<"there no data"; 
                return; 
            }
            top--; 
        }
}; 

int main () { 

    int s; 
    cout<< "enter size of stack : "; 
    cin>> s; 

    cybrom c(s); 
    
    c.push(2); 
    c.push(8); 
    c.push(11); 
    c.push(35); 
    c.push(49);  

    while (c.top != -1) { 
        cout<< c.showtop() << "\n"; 
        c.pop();  
    }

}



//   while (c.top != -1)   this condition when we have all values( array )

//   while (! st.empty())    this in case of string 
