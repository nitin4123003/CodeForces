#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    int n,i;
    cin>>n;
    char a[100];
    cin>>a;
    if(n%2==0)
    {
        for(i=0;i<n;i=i+2)
        {
            cout<<a[i]<<a[i+1];
            if(i!=n-2)
            cout<<"-";
        }
    }
    else
    {
        for(i=0;i<n-3;i=i+2)
        {
            cout<<a[i]<<a[i+1];
            cout<<"-";
        }
        cout<<a[i]<<a[i+1]<<a[i+2];
    }
    getch();
}
