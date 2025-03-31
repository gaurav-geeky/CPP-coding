#include <iostream> 
using namespace std; 

int main() {
// while (i<=10) {
//     cout<<i<<endl; 
//     i++; 
// }  
              // int num, into=1; 
              // cout<<"enter num :"; 
              // cin>>num;  

              // for (int i=1; i<=4; i++) { 
              //     into=into*i; 
              // }
              //   cout<<into;  
      int num; 
      cout<<"enter num : ";
      cin>>num; 

      for(int i=1; i<num; i++) {
        if(num%i==0) {
          cout<<i<<endl;
        }
      }
} 