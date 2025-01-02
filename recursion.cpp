//find factorial of an number

#include<iostream>
using namespace std;
int fact(int m)
{
    if(m==1)
        return 1;
    else
    {
        return m*fact(m-1);
    }
}
main()
{
   int n,f;
   cout<<"enter ";
   cin>>n;
   cout<<fact(n);
}
