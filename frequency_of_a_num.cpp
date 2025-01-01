//find frequency of a given single digit in an number; i/p:Number=123422 n=2 o/p:3
#include<iostream>
using namespace std;
int freq(int a,int n,int c);

main()
{
    int a1,m,countt=0;
    cout<<"enter number : ";
    cin>>a1;
    cout<<"enter whose frequency : ";
    cin>>m;

    countt=freq(a1,m,0);
    cout<<countt;

}

int freq(int a,int n,int c)
{
    int t;
    if(a==0)
        return c;
    else
    {
        t=a%10;
        if(t==n)
        {
            c++;
        }
        freq(a/10,n,c);
    }
}
