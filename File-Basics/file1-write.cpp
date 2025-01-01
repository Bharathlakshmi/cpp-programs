#include<iostream>
using namespace std;
#include<fstream>

main()
{
    fstream f;
    char str[100];
    cout<<"Enter String : ";
    //cin>>str;
    cin.getline(str,100);

    f.open("text.txt",ios::app);

    if(!f)
    {
        cout<<"File creation failed :-(";
        return -1;
    }

    f<<str;
    f.close();
}
