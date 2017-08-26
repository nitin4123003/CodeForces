#include<stdio.h>

void sort(int p[],int t[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
			}
			else if(p[i]==p[j]&& t[i]<t[j])
			{
                temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=t[i];
				t[i]=t[j];
				t[j]=temp;
            }
        }
	}
}

int main()
{
    int n,k,i,p[60],t[60];
    int item,count=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d%d",&p[i],&t[i]);
    sort(p,t,n);
    /*for(i=0;i<n;i++)
    printf("%d\t%d\n",p[i],t[i]);*/
    for(i=0;i<n;i++)
    {
        if(p[k-1]==p[i] && t[k-1]==t[i])
        count++;
    }
    printf("%d",count);
    getch();
}
