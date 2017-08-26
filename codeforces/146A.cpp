#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,i,sum1,sum2,flag=0,digit=0;
    char m[51];
    scanf("%d",&n);
    gets(m);
    for(i=1;i<=n;i++)
    {
                     digit=m[n-i]-48;
                     if(digit==4 || digit==7)
                     flag=1;
                     else
                      {flag=0;
                       break;}
    }
    printf("%d",flag);
    if(flag==1)
    {
               sum1=0;
               sum2=0;
               for(i=1;i<=n/2;i++)
               {
                                  digit=m[n-i]-48;
                                  sum2=sum2+digit;
               }
               for(i=1;i<=n/2;i++)
               {
                                  digit=m[(n/2)-i]-48;
                                  sum1=sum1+digit;
               }
               printf("%d%d",sum1,sum2);
    }
    if(sum1==sum2 && flag==1)
    printf("YES");
    else
    printf("NO");
    getch();
}
