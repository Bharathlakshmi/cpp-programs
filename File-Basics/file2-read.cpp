#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
#include<fstream>

main()
{
    fstream f;
    char arr[100];

    f.open("text.txt",ios::in);
    f.getline(arr,100);
    cout<<arr;
    //putline(cout,arr);

    f.close();
}

