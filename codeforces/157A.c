#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a[30][30],i,j,k,sumrow=0,sumcol=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
                    for(j=0;j<n;j++)
                    sumrow=sumrow+a[i][j];
                    for(j=0;j<n;j++)
                    {
                                    for(k=0;k<n;k++)
                                    sumcol=sumcol+a[k][j];
                                    if(sumcol>sumrow)
                                    count++;
                                    sumcol=0;
                    }
                    sumrow=0;
    }
    printf("%d",count);
    getch();
}
    
