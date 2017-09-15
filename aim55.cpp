
#include<iostream>

using namespace std;

float fact(int nm)
{
 float facto=1;
  for(int i=1; i<=nm; ++i)
    {
      facto=facto*i;
    }
 return facto;
}


int main()
{
 int n, n1, dig, sum;

 cout<<"Program to check whether a number is Strong number or not."<<endl;
 cout<<"Enter a number :"<<endl;
 cin>>n;
 n1=n;

 while(n)
 {
  dig=n%10;
  sum=sum+fact(dig);
  n/=10;
 }
 if(sum==n1) cout<<"It is s Strong number"<<endl;
 else cout<<"It is not a Strong number"<<endl;

 return 0;
}
