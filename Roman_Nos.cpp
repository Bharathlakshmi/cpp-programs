#include<iostream>
#include<algorithm>
using namespace std;

void print(int number)
{
    int i=12;

    int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};

    string symbol[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};

    while(number>0)
    {
        int div=number/num[i];
        number=number%num[i];
        while(div--)
        {
            cout<<symbol[i];
        }
        i--;
    }
}

main()
{
    int n;
    cout<<"Enter N: ";
    cin>>n;

    cout<<"Roman Numeral : ";
    print(n);
    cout<<endl;
}
