#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    int n,m,i,flag=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<15;i++)
    {
                     if(a[i]==n && a[i+1]==m)
                     {
                                flag=1;
                                break;
                     }
    }
    if(flag==1)
    printf("YES");
    else
    printf("NO");
    getch();
}
