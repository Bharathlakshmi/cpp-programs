/*
A version number is a string that is used to identify the unique state of a software product. A version number looks 
like a.b.c.d, where a, b, etc are numbers, so the version number is a string in which numbers are separated by dots. 
These numbers generally represent the hierarchy from major to minor (a is major and d is minor). 
In this problem, we are given two version numbers. We need to compare them and conclude which one is the 
latest version number (that is, which version number is greater). 

Example: 
Input: 
V1 = “1.0.31”
V2 = “1.0.27”
Output:  v1 is latest
Because V2 < V1

Input: 
V1 = “1.0.10”
V2 = “1.0.27”
Output:  v2 is latest
Because V1 < V2 
*/

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
