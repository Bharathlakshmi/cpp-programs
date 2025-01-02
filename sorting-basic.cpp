//sort an array without using inbuilt function

#include<iostream>
using namespace std;
main()
{
    int a[10],n,t;
    cout<<"enter n : ";
    cin>>n;
    cout<<"enter array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
            }
        }
    }
    cout<<"sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
