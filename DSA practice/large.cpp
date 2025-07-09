#include <iostream>
using namespace std;


int main()
{

    string s = "Madam deputy Chairman I rise to support the bill";  

    string w1, str;

    cout << "original string: " << s << "\n";

    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != ' ')
        {
            w1.push_back(s[i]);
            // i++;
        }
        else
        {
            break;
        }
    }
    cout << "back up in w1 : ";

    for (int i = 0; i < w1.size(); i++)
    {
        cout << w1[i];
    }

    for (int i=0;  i< s.length();  i++) { 

        if ( s[i] != ' ') 
        { 
            str.push_back (s[i]); 

            if ( i+1 == s.size() && str.size() > w1.size())
            { 
                w1 = str; 
            }
        } 

        else { 
            if (str.size() > w1.size())
            { 
              w1 = str; 
            } 
            str.clear(); 
        }
    }

    cout << "\nlargest word in a string : " << w1; 

    //      this is the longest word in a string

}

