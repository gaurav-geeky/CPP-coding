#include <iostream>
#include <vector>
using namespace std;

int main()
{
 
    vector<int> v1;
    int s, n;
    cout << "enter size of vec \n";
    cin >> s;
    cout << "\n enter values: \n";

    for (int i = 0; i < s; i++)
    {
        cin >> n;
        v1.push_back(n);
    }
    cout << "\n store data in vector v1 : \n";
    for (auto k : v1)
    {
        cout << k << "\t";
    }

    // cout << "now v1 ::    ";
    // for (int i = 0; i < v1.size(); i++)
    // {

    //     cout << i << " value : " << v1[i] << "\t";
    // }

    vector <int> v4; 
    v4.push_back(11); 
    cout<< "\n size v4 : " << v4.size() << "\n cap v4 : "<< v4.capacity(); 
    
    v4.push_back(22); 
    cout<< "\n size v4 : " << v4.size() << "\n cap v4 : "<< v4.capacity(); 
    
    v4.push_back(33); 
    cout<< "\n size v4 : " << v4.size() << "\n cap v4 : "<< v4.capacity(); 
    
    v4.push_back(44); 
    cout<< "\n size v4 : " << v4.size() << "\n cap v4 : "<< v4.capacity(); 
    
    
    v4.push_back(67); 
    cout<< "\n size v4 : " << v4.size() << "\n cap v4 : "<< v4.capacity(); 
    
    v4.push_back(85); 
    cout<< "\n size v4 : " << v4.size() << "\n cap v4 : "<< v4.capacity(); 
    

}
