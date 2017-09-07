#include <iostream>

using namespace std;

int main()
{   char ch;
    cout<<"enter an alphabet of any case"<<endl;
    cin>>ch;

    if(ch>='a'&&ch<='z')
    {cout<<"Entered character is a lower case alphabet"<<endl;
    }
    else
    { if(ch>='A'&&ch<='Z')
     {cout<<"Entered character is an upper case alphabet"<<endl;}
     else
     {cout<<"Invalid entry"<<endl;}
     }
    return 0;
}
