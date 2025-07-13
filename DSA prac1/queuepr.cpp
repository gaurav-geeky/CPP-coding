#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    queue<int> q1;

    q1.push(10);
    q1.push(1);
    q1.push(12);
    q1.push(9);
    q1.push(34);

    cout << "size of queue q1 : " << q1.size() << endl;
    cout << "  \nfront element : " << q1.front() << endl; 

    q1.pop(); 
    while (!q1.empty())
    {
        cout << q1.front() << "\t";
        q1.pop();
    }
    cout << "\n  front : " << q1.front(); // garbage value . why ??
    cout << "  \n last element : " << q1.back();

   
    // deque .. 

    deque<int> d1;

    d1.push_back(20);
    d1.push_front(3);
    d1.push_back(16);
    d1.push_front(5);
    d1.push_back(11);
    d1.push_front(7);

    cout << "\n  \nsize of deque : " << d1.size() << endl;

    for (auto k : d1)
    {
        cout << k << "\t";
    }

    d1.pop_back();
    d1.pop_back();
    cout << "   \npop back : " << endl;

    for (auto k : d1)
    {
        cout << k << "\t";
    }

    d1.pop_front();
    d1.pop_front();
    cout << "   \npop front : ";
    for (auto k : d1)
    {
        cout << k << "\t";
    }

    deque<int> d2;    //      insert data in the middle of elements      //

    d2.push_back(30);
    d2.push_front(11);
    d2.push_back(2);
    d2.push_back(9);
    d2.push_front(57);

    deque<int>::iterator ti = d2.end();

    d2.insert(ti, 1000);
    cout << "\n after insert at end -1  \n";

    for (auto k : d2)
    {
        cout << k << "\t";
    }
}

