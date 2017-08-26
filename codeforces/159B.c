#include<stdio.h>
int main()
{
    int n,m,x[100000],y[100000],a[100000],b[100000];
    int count=0,bcount=0,i,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d%d",&x[i],&y[i]);
    for(i=0;i<m;i++)
    scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(y[i]==b[j])
            {
                count++;
                if(x[i]==y[j])
                bcount++;
                printf("%d\t%d\n",i+1,j+1);
            }
        }
    }
    printf("%d\t%d",count,bcount);
    getch();
}
    
    
