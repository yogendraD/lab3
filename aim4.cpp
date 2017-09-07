#include <iostream>

using namespace std;

int main()
{   int x;
    cout << "enter the number to determine its divisibility by 5 and 11" << endl;
    cin>>x;
    double a=x%55;
    if(a==0)
    { cout<<"number is divisible by 5 and 11"<<endl;
    }
    else
    { cout<<"number is not divisible by 5and 11"<<endl;
     }
    return 0;
}
