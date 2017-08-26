#include<stdio.h>
#include<conio.h>
int main()
{
    int i,k,n,a[50]={0},count=0;
    printf("Enter the no. of players and the k-th player");
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    while(i<n)
    {
              if(a[i]>=a[k-1]&&a[i]>0)
              count=count+1;
              i++;
    }
    printf("\n\n%d",count);
    getch();
}
              
