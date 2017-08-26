#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rem,nw;
    scanf("%d",&n);
    n=n-10;
    if(n>=2 && n<=9)
    printf("4");
    else
    if(n==10)
    printf("15");
    else
    if(n==11||n==1)
    printf("4");
    else
    printf("0");
    getch();
}
