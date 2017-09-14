#include <iostream>

using namespace std;

int main()
{   int x,y,large;
    cout<<"Enter 1st number"<<endl;
    cin>>x;
    cout<<"Enter 2nd number"<<endl;
    cin>>y;

    if(x>y)
    { large=x;}
    else { large=y;}

    while(large<(x*y))
    {
      if(large%x==0&&large%y==0)
        break;

      large=large+1;
    }
    cout<<"The LCM is="<<large<<endl;
    return 0;
}
