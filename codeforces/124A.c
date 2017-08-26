#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,i,count=0;
    scanf("%d%d%d",&n,&a,&b);
    for(i=1;i<=n;i++)
    {
                 if( i-1>=a && n-i<=b)
                 count++;
    }
    printf("%d",count);
    getch();
}
