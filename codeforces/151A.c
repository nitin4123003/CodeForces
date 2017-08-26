#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,l,c,d,p,nl,np,a,b,m,e;
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
    a=(k*l)/nl;
    b=c*d;
    m=p/np;
    e=(a<b && a<m)?a:(b<m)?b:m;
    e=e/n;
    printf("%d",e);
    getch();
}
