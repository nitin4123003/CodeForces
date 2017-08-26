#include<stdio.h>
int main()
{
    int a[5][5],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    sum=sum+a[i][i];
    for(i=0,j=n-1;i<n && j>=0;i++,j--)
    sum=sum+a[i][j];
    for(i=0;i<n;i++)
    sum=sum+a[n/2][i];
    for(i=0;i<n;i++)
    sum=sum+a[i][n/2];
    sum=sum-3*a[n/2][n/2];
    printf("%d",sum);
    getch();
}
