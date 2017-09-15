#include<iostream>

using namespace std;

float fact(int nm)
{
 float facto=1;
  for(int i=1; i<=nm; ++i)
    {
      facto=facto*i;
    }
 return facto;
}


int main()
{
 int i, n, n1, dig;
 float sum;
 cout<<"Enter some value for n "<<endl;
 cin>>n;

 for(i=1; i<=n; ++i)
  {
     sum=0;
     n1=i;

     while(n1)
      {
        dig=n1%10;

        sum=sum+fact(dig);
        n1/=10;
      }
   if(sum==i) cout<<"\n"<<i<<" is Strong number"<<endl;

 }
 return 0;
 }

