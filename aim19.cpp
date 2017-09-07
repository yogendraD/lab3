#include <iostream>
#include <math.h>

using namespace std;

int main()
{   int p;
    int c;
    int m;
    int b;
    int cs;
    cout<<"Enter marks out of 100"<<endl;
    cout<<"Enter marks of physics "<<endl;
    cin>>p;
    cout<<"Enter marks of chemistry"<<endl;
    cin>>c;
    cout<<"Enter marks of mathematics"<<endl;
    cin>>m;
    cout<<"Enter marks of biology"<<endl;
    cin>>b;
    cout<<"Enter marks of computer"<<endl;
    cin>>cs;

    int a=(p+c+m+b+cs)/5;
    if(a>=90)
    { cout<<"percenteage="<<a<<"  grade obtained is 'A'"<<endl;}
    else
    { if(a>=80&&a<=90)
      { cout<<"percentage="<<a<<" and grade is 'B'"<<endl;}
      else
       { if(a>=70&&a<=80)
         { cout <<" percentage="<<a<<" and grade is 'C'"<<endl;}
          else
          { if (a>=60&&a<=70)
           { cout<<"percentage="<<a<<" and grade is 'D'"<<endl;}
            else
            {if(a>=40&&a<=60)
              {cout<<"percentage="<<a<<" and grade is 'E'"<<endl;}
              else
              { cout<<"percentage="<<a<<" FAILED"<<endl;}}}}}
    return 0;
}
