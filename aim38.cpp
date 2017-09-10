#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"Enter the number whose reverse is to be find"<<endl;
   cin>>n;
   int n1=n;
   int rev=0;
   int k;
   while(n>0)
   {  k=n%10;
      rev=rev*10 + k;
      n=n/10;}
   cout<<"Reversed number is="<<rev<<endl;
   if (n1==rev)
   { cout<<"the number entered is a palindrome"<<endl;}
   else
   { cout<<"the number entered is not a palindrome"<<endl;}
   return 0;
}
