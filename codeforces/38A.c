#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,time[100],i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    scanf("%d",&time[i]);
    scanf("%d%d",&a,&b);
    for(i=a-1;i<b-1;i++)
    sum=sum+time[i];
    printf("%d",sum);
    getch();
}
