#include<iostream.h>
using namespace std;
#include<conio.h>
int main()
{
    long long int n,m,xc,yc;
    int k,count=0,i,j;
    cin>>n>>m>>xc>>yc>>k;
    int *x=new int[k];
    int *y=new int[k];
    for(i=0;i<k;i++)
    cin>>x[i]>>y[i];
    for(i=0;i<k;i++)
    {
        while((xc+x[i]<=n) && (yc+y[i]<=m)&& (xc+x[i]>=1) && (yc+y[i]>=1))
        {
            xc=xc+x[i];
            yc=yc+y[i];
            count++;
        }
    }
    cout<<count;
    getch();
}
