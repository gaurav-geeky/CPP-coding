#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    //  q4.  replac each letter with next in alphbetic order; 

    string s4 = "cybrom";
    int s = s4.size(); 

    cout<< s4; 

    for (int i=0; i<s; i++) { 

        s4[i] = s4[i] + 1; 
    }

cout<<"\n" << s4 << " : now after replace each letter to next alphabet "; 
}
