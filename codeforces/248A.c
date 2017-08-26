#include<stdio.h>
#include<conio.h>
int main()
{
    int countl1=0,countl2=0,countr1=0,countr2=0,i,j,a[10000][2];
    int sum1=0,sum2=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    for(j=0;j<2;j++)
                    scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
                    if(a[i][0]==1)
                    countl1++;
                    else
                    countl2++;
                    if(a[i][1]==1)
                    countr1++;
                    else
                    countr2++;
    }
    sum1=(countl1>=countl2)?countl2:countl1;
    sum2=(countr1>=countr2)?countr2:countr1;
    printf("%d",sum1+sum2);
    getch();
}
    
    
