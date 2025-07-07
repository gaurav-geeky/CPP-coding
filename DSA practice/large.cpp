#include <iostream>
using namespace std;

int main()
{
    string s1 = "II am the longest word in a string";
    string b, str;

    cout << "orginal : " << s1 << "\n";

    for (int i = 0; i < s1.size(); i++)
    {

        if (s1[i] != ' ')
        {
            b.push_back(s1[i]);
        }
        else
        {
            break;
        }
    }
    cout << " backup " << "\n";

    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i];
    }

    for (int i = 0; i < s1.size(); i++)
    {

        if (s1[i] != ' ')
        {

            str.push_back(s1[i]);

            if (i + 1 == s1.size() && str.size() > b.size())
            {
                b = str;
            }
        }

        else
        {
            if (str.size() > b.size())
            {
                b = str;
            }
            str.clear();
        }
    }

    cout << " \nfinal output : " << b;
}
