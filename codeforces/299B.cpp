#include<stdio.h>
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    long unsigned int n,k,i=0,count=0;
    char d;
    bool ans=true;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>d;
        if(d=='#')
        count++;
        else
        count=0;
        if(count>=k)
        {
            ans=false;
            break;
        }
    }
    if(ans)
    cout<<"YES";
    else 
    cout<<"NO";
    getch();
}
    
