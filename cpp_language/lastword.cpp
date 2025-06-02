//  find the length of last word.

#include <iostream>
using namespace std;

int find()
{

    string word = " this is our javascript class ";
    int s = word.length();
    int  count = 0;
    bool flag = 0; 

    for (int i = s - 1; i >= 1; i--)
    {

        if (word[i] == ' ')
        {
            if (flag == 0)
            {
                continue;
            }
            else
            {
                break;
            }
        }

        else
        {
            flag = 1;
            count++;
        }
    }
    return count;
};

int main()
{

    cout <<"lenght of last word : "<<find();
}
