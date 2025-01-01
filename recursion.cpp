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
   //f=fact(n);
   //cout<<"factorial : "<<f;
   cout<<fact(n);
}
