#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int l,m,n,sum,a,b,c;
    scanf("%d%d%d",&l,&m,&n);
    a=sqrt((l*n)/m);
    b=sqrt((m*l)/n);
    c=sqrt((m*n)/l);
    sum=4*(a+b+c);
    printf("%d",sum);
    getch();
}
