#include <iostream>

using namespace std;

int main()
{   int x;
    cout << "enter the year number to determine whether it is a leap year or not"<< endl;
    cin>>x;
    double a=x%4;
    if(a==0)
    { cout<<x<<" is a leap year"<<endl;
    }
    else
    { cout<<x<<" is not a leap year"<<endl;
     }
    return 0;
}
