#include<iostream>
using namespace std;
struct student
{
    int r;
    char name[10];
    int mark;
};
main()
{
    int sum=0;
   struct student s[1];
   for(int i=0;i<=1;i++)
   {
       cout<<"enter roll,name,marks : ";
       cin>>s[i].r>>s[i].name>>s[i].mark;
   }

    for(int i=0;i<=1;i++)
    {
       cout<<endl<<s[i].r<<s[i].name<<s[i].mark;
    }

    for(int i=0;i<=1;i++)
    {
        sum=sum+s[i].mark;
    }

    cout<<"\n both marks :"<<sum;

}
