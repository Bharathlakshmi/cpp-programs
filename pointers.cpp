#include<iostream>
using namespace std;

main()
{
   int n;
   int *p;
   p=&n;
   cout<<"enter ";
   cin>>n;
   //cout<<"value : "<<*p<<endl;
   //cout<<"value : "<<p<<endl;
   // cout<<"value : "<<&p<<endl<<endl;

   int **b;
   b=&p;
   cout<<"value n: "<<*p<<endl;
   cout<<"value : "<<p<<endl;
   cout<<"value : "<<b<<endl<<endl;


}
