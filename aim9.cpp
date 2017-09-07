#include <iostream>

using namespace std;

int main()
{   char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;

    if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
    {cout<<"Entered character is an alphabet"<<endl;
    }
    else
    {  if(ch>='0'&&ch<='9')
       {cout<<"Entered chracter is a digit"<<endl;
       }
       else
       {cout<<"entered chracter is a special character"<<endl;}
       }
    return 0;
}
