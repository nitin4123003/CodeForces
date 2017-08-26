#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {b[a[i]-1]=i+1;}
    for(i=0;i<n;i++)
    printf("%d\n",b[i]);
    getch();
}
    
