
//   SELECTION SORT ORIGINAL  :: ascending order . 
//  here is chotu ele store every i (val)  and  j= (i+1). 
// if(val), chotu >  j [chotu check all j ele], then  chotu= j,  
//  AT LAST   if chotu != i >>> swap (chotu , i).  

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 14, 2, 5, 7}; 
    int s = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < s; i++) 
    {
        cout << arr[i] << "\t";
    }

    int i, chotu;

    for (i = 0; i < s; i++)
    {
        chotu = i;

        for (int j=i+1; j < s; j++)
        {
            if (arr[chotu] > arr[j])
            {
                chotu = j;
            }
        }

        if (chotu != i)
        {
            int swp;
            swp = arr[chotu];
            arr[chotu] = arr[i]; 
            arr[i] = swp;
        }
    }

    cout << "\n after selection sort\n";

    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
}
 
// here chotu check each element of (j loop) so  no optimize - both loop run. 








