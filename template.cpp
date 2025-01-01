
#include<iostream>
using namespace std;

template <class T>
void maxx(T a,T b)
{
    cout<<"maximum is : ";
    if(a>b)
       cout<<a;
    else
       cout<<b;

    cout<<endl;
}

main()
{
    float n=9.8,m=9.9;
    maxx("abhi","sri");
    maxx(4,3);
    maxx(n,m);


}
