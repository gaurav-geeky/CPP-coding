//      bubble sort chall.  s =0 error, s=1  size must 2,   max size 10 .

#include <iostream>
using namespace std;

void bubbbling(int arr[], int s)
{
    int c = 0;
    bool check; 

    for (int i = 0; i < s; i++)
    {
        check = false;
        for (int j = 0; j < s - 1 - i; j++)
        {
            c++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                check = true;
            }

            if (check == false)
            {
                break;
            }
        }
    }
    cout << "no. of count: " << c << endl;
}

void arrayPrint(int arr[], int s)
{
    cout << "bubbled Array: " << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int s;
    cout << "enter size of array: \n ";
    cin >> s;

    int ray[s];
    cout << "enter " << s << " values \n"; 

    if (s == 0) //       condi 1   if size is zero : error;
        {
            cout << "no value found error " << endl;
        }
        else if (s == 1) //  condi 2   if size is one :   must be 2 ;
        {
            cout << "size must be 2 " << endl;
        }
        else if (s > 10) //   condi 3    size should not exceed 10 ;
        {
            cout << "max size is 10, array overloading " << endl;
        }

    for (int i = 0; i < s; i++)
    {
        cin >> ray[i];
    } 

    bubbbling (ray, s); 
    arrayPrint (ray, s); 
}


























