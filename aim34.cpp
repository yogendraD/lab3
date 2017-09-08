#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"Enter the number whose first and last digit you want to swap"<<endl;
   cin>>n;
   int n1=n;
   int y=n1%10;                     // y is last digit
   int z=0;
   while(n>0)
   { n=n/10;
     z=z+1;
   }
     z=z-1;

     int b=pow(10,z);

     int a=n1/b;                                  // a is first digit

     int d=n1-y+(y*b)+a-(a*b);
     cout<<"the number with swept digits is="<<d<<endl;
    return 0;
}
