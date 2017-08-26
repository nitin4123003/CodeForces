#include<stdio.h>
#include<conio.h>
int main()
{
    int s,n,i,j,t1=0,t2=0,flag=0;
    int a[1000][2];
    scanf("%d%d",&s,&n);
    for(i=0;i<n;i++)
    scanf("%d%d",&a[i][0],&a[i][1]);
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i][0]<a[j][0])
			{
				t1=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=t1;
				t2=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=t2;
			}
		}
    }
    for(i=0;i<n;i++)
    {
                    if(s>a[i][0])
                    s=s+a[i][1];
                    else 
                    {flag=1;
                    break;}
    }
    if(flag==1)
    printf("NO");
    else 
    printf("YES");
    getch();
}	
