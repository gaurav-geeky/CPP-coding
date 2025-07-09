#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    // when we use getline first then simple string ___ it asks for both valu (cin)

    //  but when  simple str then  getline   ___ it ask only for 1st value and  not for 2nd.

    string bb;
    cout << "\n enter full name: \n";
    getline(cin, bb);
    cout << "ur full name __ " << bb;

    string a;
    cout << "\n enter string a name : \n";
    cin >> a;
    cout << "ur dynamic a: " << a;

    string c(5, 'j');
    cout << "\n"
         << c << "\n";

    string d = "362961";
    cout << d << "\n";

    sort(d.begin(), d.end());
    cout << "after sort in algo temp  d : " << d;

    sort(d.begin(), d.end(), less<int>());
    cout << " \n after sort in algo temp  d less  " << d;

    sort(d.begin(), d.end(), greater<int>());
    cout << " \n after sort in algo temp  d greater  " << d;

    // cout<<"\n size of d : " << d.size();
    // d.resize(4);  cout<< "\n resize value in d: "<<d.size() << "\n resize no d : "<<d ;

    string cy = "cybromindia";
    cout << "\n  omin in cyb india inde no : " << cy.find("omin");

    cout << "\n cy front: " << cy.front();
    cout << "\n cy back: " << cy.back();

    cout << "\n add strings of num and char : " << d + cy; //  concate only display , no update

    cout << "\n d.append(cy) : " << d.append(cy); //  append updates in which value is appended __ d
    cout << "\n d: " << d << "\n  cy : " << cy;

    string h = "tulsi";
    h.insert(2, "two");
    cout << "\n insert h: " << h;

    h.erase(3, 2);
    cout << "\n  after erase 3  2 : " << h;
}
