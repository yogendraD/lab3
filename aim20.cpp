#include <iostream>
#include <math.h>

using namespace std;

int main()
{  int x;
   cout<<"Enter salary"<<endl;
   cin>>x;

   if(x<=10000&&x>=0)
   { double h=0.2*x;
     double d=0.8*x;
     double gs=x+h+d ;
     cout<<"gross salary is="<<gs<<endl;}
     else
     { if(x<=20000&&x>=10000)
    {double h1=0.25*x;
    double d1=0.9*x;
    double gs1=x+h1+d1;
    cout<<"gross salary is="<<gs1<<endl;}
     else
     {if (x>=20000)
      {double h2=0.3*x;
      double d2=0.95*x;
      double gs2=x+h2+d2;
      cout<<"Gross salary is="<<gs2<<endl;}
      else
      { cout<<"invalid entry"<<endl;}}}
    return 0;
}
