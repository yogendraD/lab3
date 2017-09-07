#include <iostream>

using namespace std;

int main()
{   int x,y,z;
    cout<<"Enter the first angle"<<endl;
    cin>>x;

    if(x>=0&&x<=180)
    { cout<<"Enter 2nd angle"<<endl;
      cin>>y;}
    else
    {cout <<"invalid angle"<<endl;}
    if(y<=180&&y>=0)
    {  cout<<"Enter 3rd angle"<<endl;
       cin>>z;}
    else
    { cout<<"invalid angle"<<endl;}
    if(z>=0&&z<=180)
    { cout<<"All angles are valid"<<endl;}
    else
    { cout<<"invalid angle"<<endl;}
    int v=x+y+z;
    if (v==180)
    { cout<<"triangle can be formed by these angles"<<endl;}
    else
    { cout <<" No valid triangle can be formed by these angles"<<endl;}
    return 0;
}
