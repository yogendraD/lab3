#include <iostream>

using namespace std;

int main()
{ int x=1;
  int n;
  cout<<"enter the value upto which you want to sum up all natural numbers"<<endl;
  cin>>n;
  int sum=0;
  cout<<"sum of all numbers from 1 to n is:"<<endl;
  while(x<=n)
  { sum=sum+x;
    x=x+1;}
    cout<<sum<<endl;

    return 0;
}
