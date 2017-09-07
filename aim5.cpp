#include <iostream>

using namespace std;

int main()
{   int x;
    cout << "enter the number to determine whether it is even or odd" << endl;
    cin>>x;
    double a=x%2;
    if(a==0)
    { cout<<"number is even"<<endl;
    }
    else
    { cout<<"number is odd"<<endl;
     }
    return 0;
}
