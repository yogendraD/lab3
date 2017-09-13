#include <iostream>

using namespace std;

int main()
{   int x, y, small, hcf, k=1;
    cout<<"Enter 1st number"<<endl;
    cin>>x;
    cout<<"Enter 2nd number"<<endl;
    cin>>y;
    if(x>=y) small=y;
    else small=x;

      while(k<=small)
      {
       if((x%k==0)&&(y%k==0)) hcf=k;

        k=k+1;
      }
       cout<<"HCF is="<<hcf<<endl;

    return 0;
}
