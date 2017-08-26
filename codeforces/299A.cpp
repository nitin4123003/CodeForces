#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    long int n;
    cin>>n;
    long long int *a=new long long int[n];
    for(long int i=0;i<n;i++)
    cin>>a[i];
    long long int min=a[0];
    for(long int i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    int flag=0;
    for(long int i=0;i<n;i++)
    {
        if(a[i]%min!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<min;
    else
    cout<<"-1";
    getch();
}
    
    
