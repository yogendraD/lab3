#include <iostream>

using namespace std;

int main()
{   int x,y,z;
    cout << "enter the 1st number to compare" << endl;
    cin>>x;
    cout<<"enter the 2nd number to compare"<< endl;
    cin>>y;
    cout<<"enter 3rd number to compare"<<endl;
    cin>>z;

    if(x>(y,z))
    { cout<<"the maximum number is="<<x<<endl;
    }
    else
    { if(y>(x,z))
      {cout<<"the maximum number is="<<y<<endl;
      }
      else
      { cout<<"the maximum number is="<<z<<endl;}
      }
    return 0;
}
