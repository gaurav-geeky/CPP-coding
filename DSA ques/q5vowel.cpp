#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void vowel(string str, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            cout << "\n" << str[i] ;
        }
    } 

}

int main()
{
    //  q4.  find vowels in a string
    string s5 = "smile"; 
    int s = s5.size(); 

    vowel( s5, s); 
}
