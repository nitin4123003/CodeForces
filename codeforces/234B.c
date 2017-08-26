#include<stdio.h>
#include<conio.h>

/* Quicksort Function*/
void quicksort(int a[],int p,int r)
{
     int q;
     if(p<r)
     {
            q=partition(a,p,r);
            quicksort(a,p,q-1);
            quicksort(a,q+1,r);
     }
}


/* Partition Function*/
int partition(int A[],int p,int r)
{
     int x,temp=0,i,j;
     x=A[r];
     i=p-1;
     for(j=p;j<=r-1;j++)
     {
                       if(A[j]<=x)
                       {
                                  i=i+1;
                                  temp=A[i];
                                  A[i]=A[j];
                                  A[j]=temp;
                       }
     }
     temp=A[i+1];
     A[i+1]=A[r];
     A[r]=temp;
     return(i+1);
}

int main()
{
    int a[1000],b[1000],n,k,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[i]=a[i];
    quicksort(a,0,n-1);
    printf("\n");
    /*for(i=0;i<n;i++)
    printf("%d\t",a[i]);*/
    printf("%d\n",a[n-k]);
    for(i=0;i<n;i++)
    {
        for(j=n-k;j<n;j++)
        {
            if(a[j]==b[i])
            {
                printf("%d\t",i+1);
                break;
            }
        }
    }
    getch();
}
