#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void word(string str, int s)
{

    int count = 0;
    for (int i = 0; i < s; i++)
    {
//      last 2 sp rit ,  1 sp wr
        if ( str[i] ==' ' && str[i+1] != ' ' && str[i-1] != ' ' )
        {
            count++;
        } 

    }
    count = count + 1;
    cout << count;
}

int main()
{
    //  q4.  count no of words in string.

    string s4 = "cpp is programming language ";
    int s = s4.size(); 

    word(s4, s);
}
