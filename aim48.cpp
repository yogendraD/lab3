#include <iostream>

using namespace std;

int main()
{   int n,k,i;
    cout<<"Enter a number upto which you want prime numbers"<<endl;
    cin>>n;
    k=1;
    cout<<"The prime numbers from 1 to n are="<<endl;

    while(k<=n)
    {
     for(i=2 ; i<=(k/2) ; i++)
    { if( k%i==0)

        break;

    }
    if(i==(k/2)+1)
    cout<<k<<endl;
    k=k+1;}

    return 0;
}
