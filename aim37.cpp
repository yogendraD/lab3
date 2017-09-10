#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"Enter the number whose reverse is to be find"<<endl;
   cin>>n;
   int rev=0;
   int k;
   while(n>0)
   {  k=n%10;
      rev=rev*10 + k;
      n=n/10;}
   cout<<"Reversed number is="<<rev<<endl;
   return 0;
}
