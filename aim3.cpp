#include <iostream>

using namespace std;

int main()
{   int x;
    cout << "enter the number to determine" << endl;
    cin>>x;

    if(x>0)
    { cout<<"number entered is positive"<<endl;
    }
    else
    { if(x<0)
      {cout<<"number entered is negative"<<endl;
      }
      else
      { cout<<"number entered is zero"<<endl;}
      }
    return 0;
}
