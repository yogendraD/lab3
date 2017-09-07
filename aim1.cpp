#include <iostream>

using namespace std;

int main()
{   int x,y;
    cout << "enter the 1st number to compare" << endl;
    cin>>x;
    cout<<"enter the 2nd number to compare"<< endl;
    cin>>y;

    if(x>y)
    { cout<<"the maximum number is="<<x<<endl;
    }
    else
    { cout<<"the maximum number is="<<y<<endl;
    }
    return 0;
}
