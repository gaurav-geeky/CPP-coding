#include <iostream>
#include <vector>
using namespace std;

int main()
{

    pair<string, float> p;

    p.first = "amit";
    p.second = 7.3;
    cout << "name= " << p.first << "\t";
    cout << "roll no. = " << p.second << "\n";

    vector<pair<string, float>> v;
    int s;
    string name;
    float cgpa;

    cout << "enter how many records \n";
    cin >> s;

    for (int i = 0; i < s; i++)
    {
        cout << "\n enter name \n";
        cin >> name;
        cout << "\n enter cgpa \n";
        cin >> cgpa;

        // v.push_back(make_pair(name, cgpa));  // this method    spclly for  pair

        v.push_back({name, cgpa});
    }

    cout << "\n output of vector : \n";
    
    for (int i = 0; i < s; i++)
    {
        cout << v[i].first << " : " << v[i].second << "\t";
    }
}
