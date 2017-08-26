#include<stdio.h>
#include<conio.h>
int main()
{
    int a[7],n,i,sum=0,t=0;
    scanf("%d",&n);
    for(i=0;i<7;i++)
    scanf("%d",&a[i]);
    for(i=0;sum<n;i++)
    {
                       sum=sum+a[i];
                       t=i+1;
                       if(i==6)
                       i=-1;
    }
    printf("%d",t);
    getch();
}
    
