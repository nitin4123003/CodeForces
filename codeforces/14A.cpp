#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int n,m,i,j,top,bot,right=0,left=500,k,flag=0;
    cin>>n>>m;
    char a[52][52];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        cin>>a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            {
                top=i;
                flag=1;
                break;
            }
        }
        if(flag)
        break;
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            if(a[i][j]=='*')
            {
                bot=i;
                flag=1;
                break;
            }
        }
        if(flag)
        break;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            break;
        }
        if(j<left)
        left=j;
        for(k=m-1;k>=0;k--)
        {
            if(a[i][k]=='*')
            break;
        }
        if(k>right)
        right=k;
    }
    /*cout<<top<<"\t"<<bot<<"\t"<<left<<"\t"<<right<<"\n";*/
    for(i=top;i<=bot;i++)
    {
        for(j=left;j<=right;j++)
        cout<<a[i][j];
        cout<<"\n";
    }
    getch();
}
