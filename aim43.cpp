#include <iostream>

using namespace std;

int main()
{   int x,i;
    cout<<"Enter a positive integer"<<endl;
    cin>>x;
    cout<<"Factors of "<<x<<" are"<<endl;
    for(i = 1; i <= x; i++)
    {  if(x%i==0)
       { cout<<i<<endl;}}
    return 0;
}
