#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100][3],i,j,n,sum[3]={0,0,0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    for(j=0;j<3;j++)
                    scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
                    for(j=0;j<3;j++)
                    {
                                    sum[j]+=a[i][j];
                    }
    }
    if(sum[0]==0 && sum[1]==0 && sum[2]==0)
    printf("YES");
    else
    printf("NO");
    getch();
}
