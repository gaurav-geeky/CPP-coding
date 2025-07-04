#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void capital(string s3, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (i == 0)
        {
            s3[i] = toupper(s3[i]);
        }
        else if (s3[i] == ' ')
        {
            s3[i + 1] = toupper(s3[i + 1]);
        }
    }
    cout << s3 << endl;
}

int main()
{
    //  q3.  Capitalize First letter of each word;

    string s3 = "cpp string exercises"; 
    int s = s3.length(); 

    cout<<"\n string s3 : "<<s3<<" \n"; 
    cout<<" after capitalizing  s3 :  "; 
    capital(s3, s); 

}




