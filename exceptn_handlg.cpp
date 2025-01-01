#include<iostream>
using namespace std;


main()
{
    int a1,m;
    cout<<"enter number 1 : ";
    cin>>a1;
    try
    {
        if(a1<0)
            throw "error";

        cout<<"you entered : "<<a1<<endl; //it will not be executed if a1<0 ; it goes to catch directly after throw
    }
     catch(const char *msg)
     {
         cout<<msg<<endl;
     }


    cout<<"enter number 2: ";
    cin>>m;

    cout<<"numbers are : "<<a1<<" "<<m<<endl;


}
