#include<iostream>
using namespace std;

main()
{
    int n,a[30],t;
    cout<<"Enter n : ";
    cin>>n;
    n--;
    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(a[i]<a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
        }
    }

    /*for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }*/

    int mis,u;
    u=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]!=u)
        {
           mis=u;
           break;
        }
        u++;
    }
    cout<<"missing number : "<<mis;

}
