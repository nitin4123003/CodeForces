#include<stdio.h>
#include<conio.h>
int main()
{
	int a[1000],i,j,k=0,n,t=0,count[1000],elem;
	scanf("%d",&n);
    for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	elem=a[0];
	for(i=0;i<n;i++)
	{
                   if( elem==a[i])
                   count[k]++;
                   else
                   {
                       elem=a[i];
                       k=k+1;
                       count[k]=1;
                   }
 }
     for(i=0;i<k+1;i++)
	{
		for(j=0;j<k;j++)
		{
			if(count[i]<count[j])
			{
				t=count[i];
				count[i]=count[j];
				count[j]=t;
			}
		}
	}
	printf("%d\n%d",count[k],k+1);
	getch();
}