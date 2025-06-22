
//   INSERTION SORT ORIGINAL :: ascending order. __ like  TEEN patti. 
//   0th ele  is sorted .  res unsorted so loop  i = 1 ,    int min = i
//   check  min > 0 (ind) .  (val) min < min-1 . 

#include <iostream>
using namespace std;


int main()
{
  int arr[] = {11, 3, 9, 4, 5};
  int s = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << "\t";
  }

  int c = 0;

  for (int i = 1; i < s; i++)
  {
    int min = i; //           here, min is for unsorted 1st element.

    while (min > 0 && arr[min] < arr[min - 1])
    {

      c++;
      int sp;
      sp = arr[min];
      arr[min] = arr[min - 1];
      arr[min - 1] = sp;

      min--;
    }
  }

  cout << "\ncounter=" << c;

  cout << " \nafter insertion sort \n";
  for (int i = 0; i < s; i++)
  {
    cout << arr[i] << "\t";
  }
}





