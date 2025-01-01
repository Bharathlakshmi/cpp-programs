#include<iostream>
#include<string.h>
using namespace std;

main()
{
    string s1,s2;
    cout<<"Enter string 1 : ";
    cin>>s1;
    cout<<"Enter string 2 : ";
    cin>>s2;

   // cout<<s1<<" "<<s2;

    int v1=0;
    int v2=0;

    for(int i=0,j=0;i<s1.size() || j<s2.size();)
    {
        while(s1[i]!='.' && i<s1.size())
        {
            v1= (v1 * 10) + s1[i];
            i++;
        }

        while(s2[j]!='.' && j<s2.size())
        {
            v2= (v2 * 10) + s2[j];
            j++;
        }

        if(v1>v2)
            cout<<"Latest Version is : "<<s1;
        if(v2>v1)
            cout<<"Latest Version is : "<<s2;

        if(v1==v2)
        {
            i++;
            j++;
        }
    }
}
