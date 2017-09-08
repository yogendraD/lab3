#include <iostream>

using namespace std;

int main()
{ int x=1;
  int n;
  cout<<"enter the number whose table you want"<<endl;
  cin>>n;
  int sum;
  cout<<"table of the number is:"<<endl;
  while(x<=10)
  { sum=n*x;
    cout<<sum<<endl;
    x=x+1;}


    return 0;
}
