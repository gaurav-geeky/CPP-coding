//  class object syntax  

#include <iostream> 
#include <string> 
using namespace std; 

// class // blueprint 
class Teacher { 
    public: 
    // properties // quality   attributes.  
    string name; 
    string dept; 
    string subject; 
    double salary; 

    // method  //  member fuction : func is member of this class.
    void changeDept (string newDept ){ 
        dept = newDept; 
    }

}; 

int main () { 


    // objects of class Teacher , c. name  obj name
    Teacher t1; 
    t1.name = "shraddha"; 
    t1.dept ="cs";  
    cout<<t1.name;
    // Teacher t2; 
    // Teacher t3; 
    return 0;  
}







