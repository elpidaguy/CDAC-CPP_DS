#include <iostream>
using namespace std;
int fib(int n);
int main() {
   int n,i=0;
   cout<<"Enter the limit: ";
   cin>>n;
   cout << "\nFibonnaci Series : ";
   while(i < n) {
      cout << " " << fib(i);
      i++;
   }
	cout<<"\n";
   return 0;
}

int fib(int n) {
   if((n==1)||(n==0)) {
      return(n);
   }else {
      return(fib(n-1)+fib(n-2));
   }
}
