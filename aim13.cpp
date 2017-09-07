#include <iostream>

using namespace std;

int main()
{   int x;
    cout<<"Enter the amount of money"<<endl;
    cin>>x;

    int a=x/2000;
    int b=x%2000;
    cout<<"Number of 2000 rupees note="<<a<<endl;
    int c=b/500;
    int d=b%500;
    cout<<"Number of 500 rupees note="<<c<<endl;
    int e=d/200;
    int f=d%200;
    cout<<"Number of 200 rupees note="<<e<<endl;
    int g=f/100;
    int h=f%100;
    cout<<"Number of 100 rupees note="<<g<<endl;
    int i=h/50;
    int j=h%50;
    cout<<"number of 50 rupees note="<<i<<endl;
    int k=j/20;
    int l=j%20;
    cout<<"Number of 20 rupees note="<<k<<endl;
    int m=l/10;
    int n=l%10;
    cout<<"number of 10 rupees note="<<m<<endl;
    int o=n/5;
    int p=n%5;
    cout<<"Number of 5 rupees note="<<o<<endl;
    cout<<"Number of 1 rupee note="<<p<<endl;
    return 0;
}
