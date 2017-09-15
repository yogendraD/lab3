#include<iostream>

using namespace std;

int main()
{
 int n1, n2, n, i, m;

 cout<<"Enter a value"<<endl;
 cin>>m;
 n1=0;
 n2=1;

 cout<<"Fibonacci series "<<n1<<n2<<endl;

 for(i=2; i<m; ++i)
 {
  n=n1+n2;

  cout<<n<<endl;

  n1=n2;
  n2=n;
}
 return 0;
}
