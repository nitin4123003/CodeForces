#include<stdio.h>
#include<conio.h>

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
    char n[20],m[20];
    int a[20],i,j,k;
    int flag=0;
    gets(n);
    gets(m);
    for(i=0;i<strlen(n);i++)
    a[i]=n[i]-48;
    quicksort(a,0,strlen(n)-1);
    /*for(i=0;i<strlen(n);i++)
    printf("%d\n",a[i]);*/
    for(i=0;a[i]==0;i++){}
    /*Exchange a[i] with a[0]*/
    j=a[i];
    a[i]=a[0];
    a[0]=j;
    for(j=0;m[j]=='0';j++){}
    printf("%d\t%d\n",i,j);
    if(j!=0)
    printf("WRONG_ANSWER");
    else
    {
        flag=0;
        for(k=0;k<strlen(n);k++)
        {
            if(a[k]!=(m[k]-48))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        printf("WRONG_ANSWER");
        else
        printf("OK");
    }            
    getch();
}
