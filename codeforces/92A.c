#include<stdio.h>
#include<conio.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&n,&m);
    for(i=1;;i++)
    {
                    if(m-i>=0)
                    m=m-i;
                    else
                    break;
                    if(i==n)
                    i=0;
    }
    printf("%d",m);
    getch();
}
                    
