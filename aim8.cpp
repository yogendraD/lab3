#include <iostream>

using namespace std;

int main()
{   char ch;
    cout<<"enter an alphabet"<<endl;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    { cout<<"the entered alphabet is a vowel"<<endl;
    }
    else
    { cout<<"the entered alphabet is a consonant"<<endl;}
    return 0;
}
