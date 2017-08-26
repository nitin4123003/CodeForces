#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int i,digit=0,flag=0,count=0;
    cin>>n;
    for(i=0;n!=0;i++)
    {
                       digit=n%10;
                       if(digit==4 || digit==7)
                       count++;
                       n=n/10;
    }
    for(i=0;count!=0;i++)
    {
                       digit=count%10;
                       if(digit==4 || digit==7)
                       flag=1;
                       else
                       {flag=0;
                       break;}
                       count=count/10;
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
    getch();
}
    
