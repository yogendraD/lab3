#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"enter the number whose digits you want to add"<<endl;
   cin>>n;
   int sum=0;
   while(n>0)
   { sum = sum + n%10;
      n=n/10;
     }
   cout<<"the sum is="<<sum<<endl;

   return 0;
}
