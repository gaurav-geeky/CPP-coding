#include <iostream>
using namespace std;

int main()
{
    char s1[10] = "listen";
    char s2[10] = "silent";

    int c[26] = {0};

    for (int i = 0; s1[i] != '\0'; i++)
    {
        cout<<s1[i]<<"\t"; 
        c[s1[i] - 'a']++;
    } 
    cout<<"\n"; 
    for (int i = 0; s2[i] != '\0'; i++)
    {
        cout<<s2[i]<<"\t";
        c[s2[i] - 'a']--;
    }
    cout<<"\n";  
    bool p = true;
    for (int i = 0; i < 26; i++)
    {
        if (c[i] != 0)
        {
            p = false;
            break;
        }
    }
    if (p)
    {
        cout << "\n It's Anagram!";
    }
    else
    {
        cout << "\n not anagram! ";
    }
}