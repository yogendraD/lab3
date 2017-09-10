#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"enter the number whose digits you want to multiply"<<endl;
   cin>>n;
   int product=1;
   while(n>0)
   { product = product*(n%10);
      n=n/10;
     }
   cout<<"the product is="<<product<<endl;

   return 0;
}
