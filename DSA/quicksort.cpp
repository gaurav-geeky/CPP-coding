
//  quick sort   QUICK . 
//here, when condition matched only values are swaped , i / j still stand there and start again from same position.  

#include <iostream>
using namespace std;

int part(int arr[], int low, int high)  //      logic part
{
    int pv = arr[low];
    int i = low + 1;
    int j = high;
    int tmp;

    do
    {
        while (arr[i] < pv)
        {
            i++; //           if   i  smaller than pivot  i++     else  STOP
        }
        while (arr[j] > pv)
        {
            j--; //          if   j   greater than pivot   j--      else   STOP
        }

        if (i < j) //       if BOTH STOP   and_  i , j  not_crossed  then    swap value :  i & j
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    } while (i < j);

    //                        if BOTH STOP   and_ i , j  _crossed  then    swap value :  j  &  pivot (must point)
    tmp = arr[low];
    arr[low] = arr[j];
    arr[j] = tmp;

    return j;   //          here, j is value of pos.. j  where only   pivot sit and break array in two part.              
}

void qksort(int arr[], int low, int high)  //       qk sort recursion. 
{
    int pvt;
    if (low < high)
    {
        pvt = part(arr, low, high);
        qksort(arr, low, pvt - 1);
        qksort(arr, pvt + 1, high);
    }
}

int main()
{
    int lar[] = {4, 10, 3, 7, 5, 9};
    int s = sizeof(lar) / sizeof(lar[0]);

    for (int i = 0; i < s; i++)
    {
        cout << lar[i] << "\t";
    }
    qksort(lar, 0, s - 1);

    cout << "\n after applying quick sort \n";

    for (int i = 0; i < s; i++)
    {
        cout << lar[i] << "\t";
    }
}
