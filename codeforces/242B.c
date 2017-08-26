#include<stdio.h>
#include<conio.h>
void sort(int l[],int r[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(r[i]>r[j])
			{
				temp=r[i];
				r[i]=r[j];
			    r[j]=temp;
				temp=l[i];
				l[i]=l[j];
				l[j]=temp;
			}
			else if(r[i]==r[j] && l[i]<l[j])
			{
                temp=r[i];
				r[i]=r[j];
				r[j]=temp;
				temp=r[i];
				r[i]=r[j];
				r[j]=temp;
            }
        }
	}
}

int check(int l[],int r[],int n)
{
    int i,j,flag=0;
    for(i=1;i<n;i++)
    {
        if(l[0]<=l[i] && l[i]<=r[i] && r[i]<=r[0])
        flag=1;
        else
        {
            flag=-1;
            break;
        }
    }
    return(flag);
}
            
int main()
{
    int n,i,l[100000],r[100000];
    int l1[100000],r1[100000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d%d",&l[i],&r[i]);
    for(i=0;i<n;i++)
    {
        l1[i]=l[i];
        r1[i]=r[i];
    }
    sort(l,r,n);
    /*for(i=0;i<n;i++)
    printf("%d\t%d\n",l[i],r[i]);*/
    
    int flag=check(l,r,n);
    if(flag==1)
    {
        for(i=0;i<n;i++)
        {
            if(l1[i]=l[0] && r1[i]==r[0])
            break;
        }
        printf("%d",i+1);
    }
    else
    printf("-1");
    getch();
}
    
