#include<stdio.h>
int main()
{
    int n,m,a[100],b[100];
    int i,j,max=0,count=0,g;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&m);
    for(i=0;i<m;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                g=b[j]/a[i];
                if(max<g)
                max=g;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]%a[i]==0)
            {
                g=b[j]/a[i];
                if(g==max)
                count++;
            }
        }
    }
    printf("%d",count);
    getch();
}
