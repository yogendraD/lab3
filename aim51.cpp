#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n,n1,k=0,sum=0,i,z;
   cout<<"enter the number to check if it is an arnstrong number"<<endl;
   cin>>n;
   n1=n;
    while(n)
    { n=n/10;
      k=k+1;}
    n=n1;

    for(i=1; i<=k; i++)
    { z=n%10;
      n=n/10;
      sum=sum+pow(z,k);}
   if(sum==n1)
   { cout<<"the number is an armstrong number"<<endl;}
   else
   { cout<<"the number is not an armstrong number"<<endl;}
    return 0;
}
