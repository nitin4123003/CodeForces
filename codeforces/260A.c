#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,n,num,i,j;
    scanf("%d%d%d",&a,&b,&n);
    num=a;
    num=(num*10);
    for(j=0;j<10;j++)
    {
        if(((num+j)%b)==0)
        {
            num=num+j;
            break;
        }
    }
   if(j!=10)
    {
        printf("%d",num);
        for(i=0;i<n-1;i++)
        printf("0");
    }
    else
    printf("-1"); 
   getch();
}
