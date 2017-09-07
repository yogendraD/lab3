#include <iostream>

using namespace std;

int main()
{   int x,y,z;
    cout<<"Enter the first side"<<endl;
    cin>>x;
    cout<<"Enter the 2nd side"<<endl;
    cin>>y;
    cout<<"Enter the 3rd side"<<endl;
    cin>>z;

    if (x<y+z && y<x+z && z<x+y)
    { cout<<"triangle can be formed by these sides"<<endl;}
    else
    { cout <<" No valid triangle can be formed by these sides"<<endl;}
    if (x==y&&y==z&&z==x)
    { cout<<"The triangle formed is equilateral triangle"<<endl;}
    else
    { if(x!=y&&y!=z&&z!=x)
      { cout<<"The triangle formed is scalene triangle"<<endl;}
      else
      { cout<<"The triangle formed is isosceles triangle"<<endl;}}
    return 0;
}
