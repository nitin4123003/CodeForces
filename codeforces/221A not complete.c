#include<stdio.h>
#include<conio.h>
void function(int a[],int n)
{
    int temp;
    if(n==1)
    {
        printf("1");
        exit(getch());
    }
    else
    {
        
        temp=a[n-1];
        a[n-1]=a[n-2];
        a[n-2]=temp;
        function(a,n-1);
    }
}

int main()
{
    int n,i,a[1000];
    scanf("%d",&n);
    a[0]=n;
    for(i=1;i<n;i++)
    a[i]=i;
    function(a,n);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    getch();
}

