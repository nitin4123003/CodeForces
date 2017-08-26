#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(a[0]%2==0 || a[1]%2==0 && a[2]%2==0)
    {
                 for(i=0;i<n;i++)
                 {
                                 if(a[i]%2!=0)
                                 break;
                 }
    }
    else
    {
        for(i=0;i<n;i++)
        {
                        if(a[i]%2==0)
                        break;
        }
    }
    printf("%d",i+1);
    getch();
}
