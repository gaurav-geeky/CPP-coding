// #include <iostream> 
// using namespace std; 

// int main() {      //factorial of n  n* n-1* n-2

// int num, ans=1; 
// cout<<"enter num :"; // 
// cin>>num;  

// for (int i=1; i<=num; i++) { 
//     ans=ans*i; 
// } 
//   cout<<ans; 
// }  

#include <iostream> 
using namespace std ;

int main () {
int num; 
cout<<"enter num :"; 
cin>>num;    // factors of num

for(int i=1; i<num; i++) {
  if(num%i==0) {
    cout<<i<<endl; 
  }
}
}