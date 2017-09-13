#include <iostream>

using namespace std;

int main()
{   int x,k=1;
    cout<<"Enter a positive integer"<<endl;
    cin>>x;
    cout<<" Factorial "<<x<<" is"<<endl;
    while(x>0)
    { k=k*x;
      x=x-1;}
    cout<<k<<endl;
    return 0;
}
