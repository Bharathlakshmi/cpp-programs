#include<iostream>
using namespace std;
#include<string.h>

//return structure

struct student
{
    int mark1;
    char name[4];
    int mark;
};

struct student user()
{
    static struct student s; //static is necessary
    s.mark=100; s.mark1=99;
   // s.name[4]="abi";
    return s;

}

main()
{
    struct student a;
    a=user();


     cout<<endl<<a.mark+a.mark1;;

}
/*



//passing structure

void getdata(struct student p)
{
    cout<<"enter name, mark 1 ,mark 2 :\n ";
    cin>>p.name>>p.mark1>>p.mark;
    cout<<"\n Total marks :"<<p.mark+p.mark1;

}
void add(struct student p)
{
    //int sum=0;
    cout<<"\n Total marks :"<<p.mark+p.mark1;
}
main()
{
    struct student p;
    getdata(p);
    add(p);

}
*/

