#include <iostream>
#include <math.h>
using namespace std;

int main()
{int n,i,j,z;
  cout<<"Enter the number upto which youwant to know perfect numbers"<<endl;
  cin>>n;
  for(i=1; i<=n; i++)
  { z=0;
     for(j=1; j<i; j++)
    {if(i%j==0)
     z=z+i;
     }

  if(z==i)
  cout<<i<<" is a perfect number"<<endl;
  }
 return 0;
}
