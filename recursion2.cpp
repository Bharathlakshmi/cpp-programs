#include<iostream>
using namespace std;
int fibo(int m)
{
    if(m==0)
        return 0;
    else if(m==1)
        return 1;
    else
    {

        return fibo(m-1)+fibo(m-2);
        cout<<m;
    }
}
main()
{
   int n,f;
   cout<<"enter ";
   cin>>n;

   //for(int i=0;i<=n;i++)
      cout<<fibo(n);
}

/*

// Fibonacci Series using Recursion
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 6;
    cout << n << "th Fibonacci Number: " << fib(n);
    return 0;
}*/
