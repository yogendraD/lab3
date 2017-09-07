#include <iostream>

using namespace std;

int main()
{   char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z' || ch>='A'&& ch<='Z')
    { cout<<"the entered character is an alphabet"<<endl;
    }
    else
    { cout<<"the entered character is not an alphabet"<<endl;}
    return 0;
}
