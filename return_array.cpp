#include<iostream>
using namespace std;
#include<string.h>

//return array  i.e return type of user() function

char* user()
{
    static char s[]="hello"; //static is necessary
    return s;

}

main()
{
    char *a;
   // a=user();
    //cout<<*a;
    cout<<user();

}
/*
//numeric array

int* user()
{
    static int s[]={1,2,3,4}; //static is necessary
    return s;

}

main()
{
    int *a;
    a=user();

    for(int i=0;i<4;i++)
     cout<<*(a+i);

}
*/
