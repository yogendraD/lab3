#include <iostream>
#include <math.h>
using namespace std;

int main()
{  int n;
   cout<<"Enter a number"<<endl;
   cin>>n;
   int count0=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0;
   int k;
   while(n>0)
   {  k=n%10;
      n=n/10;
      switch(k)
    { case 0: count0=count0+1;
             break;
      case 1: count1=count1+1;
              break;
      case 2: count2=count2+1;
              break;
      case 3: count3=count3+1;
              break;
      case 4: count4=count4+1;
              break;
      case 5: count5=count5+1;
              break;
      case 6: count6=count6+1;
              break;
      case 7: count7=count7+1;
              break;
      case 8: count8=count8+1;
              break;
      case 9: count9=count9+1;
              break;}}
   cout<<"Frequency of 0="<<count0<<" times"<<endl;
   cout<<"Frequency of 1="<<count1<<" times"<<endl;
   cout<<"Frequency of 2="<<count2<<" times"<<endl;
   cout<<"Frequency of 3="<<count3<<" times"<<endl;
   cout<<"Frequency of 4="<<count4<<" times"<<endl;
   cout<<"Frequency of 5="<<count5<<" times"<<endl;
   cout<<"Frequency of 6="<<count6<<" times"<<endl;
   cout<<"Frequency of 7="<<count7<<" times"<<endl;
   cout<<"Frequency of 8="<<count8<<" times"<<endl;
   cout<<"Frequency of 9="<<count9<<" times"<<endl;

   return 0;
}
