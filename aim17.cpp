#include <iostream>
#include <math.h>

using namespace std;

int main()
{   int a;
    int b;
    int c;
    cout<<"We have to find roots of quadratic eqn of form= a*(x^2)+b*x+c"<<endl;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<"enter c"<<endl;
    cin>>c;
    int d=(b*b)-(4*a*c);
    if(d<=0)
    { cout<<"roots are imaginary cannot be found"<<endl;}
    else
    {
      double r1=(-b+sqrt(d))/(4*a);
      double r2=(-b-sqrt(d))/(4*a);
      cout<<"first root is="<<r1<<endl;
      cout<<"2nd root is"<<r2<<endl;
      }
    return 0;
}
