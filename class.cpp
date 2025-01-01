#include<iostream>
using namespace std;
/*
class addn
{
    int n1,n2;
public:
    void add(int n1,int n2);
};


void addn:: add(int n1,int n2)
{
    addn::n1=n1;
    addn::n2=n2;
    cout<<n1+n2<<endl;
    cout<<addn::n1+addn::n2;
}

main()
{
    addn s;
    s.add(3,2);
}
*/

class addn
{
    int n1,n2,sum;
public:
    void getdata();
    void add(addn t);
};

void addn:: getdata()
{
    cout<<"enter n1 and n2 :";
    cin>>n1>>n2;
}
void addn:: add(addn t)
{
    t.n1=n1;    //verum n1 and n2 belongs to object y, but t is object z
    t.n2=n2;
    t.sum=t.n1+t.n2;
    cout<<"sum of object z :"<<t.sum;
}

main()
{
    addn y,z;
    y.getdata();
    y.add(z);
}
