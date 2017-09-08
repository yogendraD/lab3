#include <iostream>

using namespace std;

int main()
{ int x=3;
  int n;
  cout<<"enter the value you want to sum up all odd numbers between 1 and it"<<endl;
  cin>>n;
  int sum=0;
  cout<<"sum of all odd numbers between 1 to n is:"<<endl;
  while(x<=(n-1))
  { sum=sum+x;
    x=x+2;}
    cout<<sum<<endl;

    return 0;
}
