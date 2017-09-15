#include <iostream>
#include <math.h>
using namespace std;

int main()
{int n,i,z=0;
  cout<<"Enter the number"<<endl;
  cin>>n;
  for(i=1; i<n; i++)
  { if(n%i==0)
    z=z+i;
  }
  if(z==n)
  cout<<"It is a perfect number"<<endl;
  else cout<<"It is not a perfect number"<<endl;
 return 0;
}
