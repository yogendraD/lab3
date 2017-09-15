#include <iostream>
#include <math.h>
using namespace std;

int main()
{   int n,n1,i,k,z,sum;
    cout<<"Enter a number upto which you want to get armstrong number"<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    { k=0;
      sum=0;
      n1=i;
      while(n1)
      { n1=n1/10;
        k=k+1;
      }
      n1=i;
      while(n1)
      {z=n1%10;
       sum=sum+pow(z,k);
       n1=n1/10;}
       if(sum==i)
       cout<<i<<" is an armstrong number"<<endl;}
    return 0;
}
