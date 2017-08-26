#include<stdio.h>
#include<conio.h>
int main()
{
    float n,x,y,a;
    int b;
    scanf("%f%f%f",&n,&x,&y);
    a=ceil((n*y)/100);
    if(a<=x)
    printf("0");
    else
    {b=a-x;
    printf("%d",b);}
    getch();
}
