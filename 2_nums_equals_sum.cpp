//check if any 2 numbers in an array can sum to a number(n)

#include<iostream>
using namespace std;

main()
{
    int n,a[30],s,temp=0;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"Enter sum : ";
    cin>>s;

    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
           if((a[i]+a[j])==s)
           {
               temp=1;
           }
       }
    }
    if(temp==1)
        cout<<"True.  2 values sum upto "<<s;
    else
        cout<<"False. No 2 values sum upto "<<s;
}
