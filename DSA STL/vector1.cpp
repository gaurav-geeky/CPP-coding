#include <iostream>
#include <vector>
using namespace std;

int main()
{
/*/
    vector<int> p(4, 100);

    cout << "\n value at 0 ind: " << p[0] << "\n";

    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << "\t\t";
    }
    cout << " size of vectr p: " << p.size() << "\n";

    //                   new vector v1

    vector<int> v1{11, 4, 21, 32};
    cout << "size of v1: " << v1.size() << "\n";

    cout << v1[0] << " : is 1st ind of v1" << "\n";

    v1[1] = 999;

    cout << " now 1 ind of v1 : " << v1[1] << "\n";

    v1[2] = 1000;
    v1[3] = 1500;
    v1[4] = 2000;
    v1[5] = 2300;

    cout << " value of 2 ind: " << v1[2] << "  ___value of 3 ind: " << v1[3] << "  ___value of 4 ind: " << v1[4] << " __ 5 inde: " << v1[5] << "\n";

    for (int i = 0; i < v1.size(); i++) //  static no of values are 4 so  only 4 vals will b print  no how much  values we re-assign..
    {
        cout << v1[i] << "\t";
    }
    //                          new vector  push values in vector;    push_back( val )
*/
    vector<int> v2;

    v2.push_back(29);
    cout << v2[0] << "\n";

    v2.push_back(31);
    cout << v2[1] << "\n";

    cout << "resize of v2 : " << v2.size() << "\n"; //  till this pushed   2 values   so size is ...

    v2.push_back(43);

    cout << " resizing of v2: " << v2.size() << "\n"; //  till this pushed   3 values so size is ...

    v2.push_back(56);

    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << "\t";
    } 

    //   new concept  :  if static vector and   push  new value   then resize ? 

    vector<int> v3{51, 14, 2, 8};
    cout << "\n \n original size of v3: " << v3.size() << "\n";

    v3.push_back(77); 
    v3.push_back(89); 
    cout<< "resize +2  of v3 : "<<v3.size() << "\n"; 

    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << "\t";
    }

    v3.pop_back(); 
    cout<< "\n after pop()  of v3 : "<<v3.size() << "\n"; 


}



