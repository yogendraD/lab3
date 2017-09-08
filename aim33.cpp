#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"enter the number, sum of whose first and last digits you want to know"<<endl;
   cin>>n;
   int n1=n;
   double y=n%10;
   int z=0;
   while(n>0)
   { n=n/10;
     z=z+1;}
     int c=z-1;
     int b=pow(10,c);
     int a=n1/b;
     int m=a+y;
     cout<<"Sum of 1st and last digit is="<<m<<endl;
    return 0;
}
