#include <iostream> 
#include <stack>  
using namespace std; 

int main()  { 

    stack<int>st; 

    st.push(2); 
    st.push(35); 
    st.push(15); 
    st.push(9);   

    cout<<"value of top st: " << st.top()<<"\n"; 
    cout<<"size of st: " << st.size() << "\n";  

    while (! st.empty()) { 
        cout<< st.top() << "\t"; 
        st.pop(); 
    }
}