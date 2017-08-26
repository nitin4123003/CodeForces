#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int k,l,prod=1;
    int flag=0,i;
    cin>>k>>l;
    for(i=1;prod<l;i++)
    {
                       prod=prod*k;
                       if(prod==l)
                       {flag=1;
                       break;}
    }
    if(flag==1)
    {cout<<"YES"<<endl;
    cout<<i-1;}
    else
    printf<<"NO";
    getch();
}
    
