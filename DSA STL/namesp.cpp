// namespace 

#include <iostream> 
using namespace std; 
 
namespace cybrom  //  to use namespace   cybrom :: variable/ operation to be performed
{ 
    int a=90; 
    int b=20; 

    float multiply()   // when not use dt ty  then error 
    { 
        cout<<"multiply = "<<a*b; 
    }

    namespace mpnagar 
    { 
        void nestmultiply () { 
            cout<<"\n mp nagar nested namesp."; 
        }
    }

    class bhopal
    { 
        public: 
        int k1, k2; 
    } obj; 
}

int main() { 

    cout<<"\n value of a+b__"<<cybrom::a+ cybrom::b<<"\n"; 
    
    cybrom::multiply(); 

    cybrom :: obj.k1=300; 
    cout<<"\n value of k1 : "<<cybrom :: obj.k1; 
    cout<<"\n\n"; 
    cout<< cybrom :: b;  
    cout<<"\n\n";  
    cybrom:: mpnagar:: nestmultiply(); 

}
















