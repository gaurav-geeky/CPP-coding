
#include <iostream>
using namespace std;

//                            recursion for quick sort
int rec(int arr[], int low, int high)
{
    int piv = arr[low];
    int i = low + 1;
    int j = high;

    int tmp;
    do
    {
        while (arr[i] < piv)
        {
            i++;
        }
        while (arr[j] > piv)
        {
            j--;
        }

        if (i < j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    } while (i < j);

    tmp = arr[low];
    arr[low] = arr[j];
    arr[j] = tmp;

    return j;
}
void qksort(int arr[], int low, int high)  // quick
{
    int piv;

    if (low < high)
    {
        piv = rec(arr, low, high);
        qksort(arr, low, piv - 1);
        qksort(arr, piv + 1, high);
    }
}
//                           table print
void pahada(int num, int i)
{
    if (i > 10)
    {
        return;
    }
    int k;
    k = num * i;
    cout << num << " * " << i << " = " << k << "\n";

    pahada(num, i + 1);
}

//                         selection sort
void sel(int car[], int s)
{
    int i, chotu;

    for (i = 0; i < s; i++)
    {
        chotu = i;
        for (int j = i + 1; j < s; j++)
        {

            if (car[chotu] > car[j])
            {
                chotu = j;
            }
        }
        if (chotu != i)
        {
            int swp;
            swp = car[chotu];
            car[chotu] = car[i];
            car[i] = swp;
        }
    }
} 

int main()
{
    // table
    int no;
    cout << "enter no to print table: ";
    cin >> no;

    pahada(no, 1);
    cout << "\n";

    // quick : pivot is center element and form left , right rec arr using 2 pointer

    int bar[] = {3, 9, 23, 4, 1, 15};
    int len = sizeof(bar) / sizeof(bar[0]);

    for (int i = 0; i < len; i++)
    {
        cout << bar[i] << "\t";
    }

    qksort(bar, 0, len - 1);

    cout << "\n after apply quick sort \n";

    for (int i = 0; i < len; i++)
    {
        cout << bar[i] << "\t"; 
    }

    //  selection sort ; chotu check all ele..

    cout << "\n\n\n";

    int car[] = {3, 9, 23, 4, 1, 15};
    int size = sizeof(car) / sizeof(car[0]);

    for (int i = 0; i < size; i++)
    {
        cout << car[i] << "\t";
    }
    sel(car, size);
    cout << "\n after selection sort \n";

    for (int i = 0; i < size; i++)
    {
        cout << car[i] << "\t";
    }
}















