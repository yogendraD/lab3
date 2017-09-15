#include <iostream>

using namespace std;

int main()
{   int n,k,i,sum=0;
    cout<<"Enter a number upto which you want sum of prime numbers"<<endl;
    cin>>n;
    k=1;
    cout<<"The sum of prime numbers from 1 to n is="<<endl;

    while(k<=n)
    {
     for(i=2 ; i<=(k/2) ; i++)
     { if( k%i==0)
        break;
     }

    if(i==(k/2)+1)
    sum=sum+k;

    k=k+1;
    }
    cout<<sum<<endl;
    return 0;
}
