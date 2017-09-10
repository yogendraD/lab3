#include <iostream>
using namespace std;

int main()
{ int a,b,i,power=1;
   cout<<"Enter the number whose power is to be raised"<<endl;
   cin>>a;
   cout<<"Enter the power you want to raise"<<endl;
   cin>>b;

   for (i=b ; i>0; i--)
   {  power=power*a; }

   cout<<"The required number is="<<power<<endl;

   return 0;
}
