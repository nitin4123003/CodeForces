#include<stdio.h>
#include<conio.h>
int main()
{
    int a[12]={4,7,47,74,444,447,474,744,477,774,747,777};
    int i,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<12;i++)
    {
                     if(n%a[i]==0)
                     {flag=1;
                     break;}
    }
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    getch();
}
                     
