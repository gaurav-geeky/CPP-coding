
//   BUBBLE SORT ORIGINAL  ::   increasing order. asceding order.  

#include <iostream>
using namespace std;

//      bubble for apply operation.
void bubbles(int arr[], int n)
{
    int temp, c = 0; 
    bool swap;

    for (int i = 0; i < n; i++)
    {
        swap = false;
        //  here,  (n-i-1)  because condition will check 1__1+ value so, no need last one, avoid unnecessary check
        // code will run less , good time complexity.  
        
        for (int j = 0; j < n - i - 1; j++)
        {
            c++; //  here, if it swaps then it counts.

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;

                swap = true;
            }
        }
        //      if code  not swap in 2nd loop  then checks. if yes, break. to stop execution of pro.. (optimize)
        if (swap == false)
        {
            break;
        }
    }
    cout << "no of hit: " << c << "\n"; // count swap hit outside loops (optimize)
}

//      print fun  for   print Arrray
void printArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }
}

int main()
{

    //      here we give array n  calling fun..
    int Arr[5] = {1, 4, 2, 3, 5};

    bubbles(Arr, 5);
    printArr(Arr, 5);
}


