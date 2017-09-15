#include <iostream>

using namespace std;

int main()
{   int n,i;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(i=2 ; i<=(n/2) ; i++)
    { if( n%i==0)
       {cout<<"The number is not a prime number"<<endl;
        break;
       }
    }
    if(i==(n/2)+1)
    cout<<"The number entered is a prime number"<<endl;
    return 0;
}
