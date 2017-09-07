#include <iostream>

using namespace std;

int main()
{   int x;
    cout<<"Enter the month number"<<endl;
    cin>>x;
    switch(x)
    {
     case 1: cout<<"31 days in January"<<endl;
            break;
     case 2: cout<<"28 days in February"<<endl;
            break;
     case 3: cout<<"31 days in March"<<endl;
            break;
     case 4: cout<<"30 days in April"<<endl;
            break;
     case 5: cout<<"31 days in May"<<endl;
            break;
     case 6: cout<<"30 days in June"<<endl;
            break;
     case 7: cout<<"31 days in July"<<endl;
            break;
     case 8: cout<<"31 days in August"<<endl;
            break;
     case 9: cout<<"30 days in September"<<endl;
            break;
     case 10: cout<<"31 days in October"<<endl;
            break;
     case 11: cout<<"30 days in November"<<endl;
            break;
     case 12: cout<<"31 days in December"<<endl;
            break;
       default : cout<<"invalid entry"<<endl;}
    return 0;
}
