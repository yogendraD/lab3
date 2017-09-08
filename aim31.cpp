#include <iostream>

using namespace std;

int main()
{  int n;
   int z=0;
   cout<<"enter the number whose digits you want to calculate"<<endl;
   cin>>n;
   while(n>0)
   { n=n/10;
     z=z+1;}
    cout<<"the number of digits are="<<z<<endl;
    return 0;
}
