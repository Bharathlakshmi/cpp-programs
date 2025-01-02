/*find missing number in array
i/p: n=5 arr=6,7,8,8,10
o/p: 9
*/

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

    //sorting
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
