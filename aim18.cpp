#include <iostream>
#include <math.h>

using namespace std;

int main()
{  int x;
   int y;
   cout<<"To calculate profit or loss we need cost price and selling price"<<endl;
   cout<<"Enter the cost price"<<endl;
   cin>>x;
   cout<<"Enter the selling price"<<endl;
   cin>>y;

   int s=y-x;
   int z=-(y-x);
    if(s>=0)
    { cout<<"There is a profit of"<<s<<endl;}
    else
    {if(s<=0)
     {cout<<"There is a loss of="<<z<<endl;}
      else
      { cout<<"there is no loss no profit"<<endl;
      }
      }
    return 0;
}
