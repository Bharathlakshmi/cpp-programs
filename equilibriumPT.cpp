 #include<iostream>
using namespace std;

main()
{
    int n,a[30],eq,s1,s2;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"Enter the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }


   eq=0;
   s1=s2=0;


        for(int j=0,k=n-1;  j!=k;  j++,k--)
       {
           s1=s1+a[j];
           s2=s2+a[k];

           if(s1==s2 && j+1==k-1)
           {
              eq=j+1;
              break;
           }
       }

       cout<<"Equilibrium point : "<<eq+1;
}
