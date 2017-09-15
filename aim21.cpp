#include<iostream>

using namespace std;

int main()
{ int x;
cout<<"enter the amount of electricity used in units"<<endl;
cin>>x;
 if(x<=50)
  { int Rs1=x*0.5;
   cout<<"cost of electricity used="<<Rs1<<endl;}
   else
   { if(x>50&&x<=150)
     {float Rs2=x*0.75;
      cout<<"Cost of electricity used"<<Rs2<<endl;
      }
      else
       { if(x>150&&x<=250)
         { float Rs3=x*1.20;
         cout<<"Cost of electricity used"<<Rs3<<endl;}
         else
         { if(x>250)
           {float Rs4=x*1.50;
              cout<<"Cost of electricity is="<<Rs4<<endl;}
              else
              {cout<<"invalid entry"<<endl;}}} }
 return 0;
}
