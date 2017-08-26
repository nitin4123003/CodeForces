#include<stdio.h>
int main()
{
    int n,t[1000],x[1000],y[1000],i;
    int sum_reach_1=0,sum_reach_2=0,count1=0,count2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d%d%d",&t[i],&x[i],&y[i]);
    for(i=0;i<n;i++)
    {
        if(t[i]==1)
        {
            count1++;
            sum_reach_1+=x[i];
        }
        else
        {
            count2++;
            sum_reach_2+=x[i];
        }
    }
    if(sum_reach_1>=((count1*10)/2))
    printf("LIVE\n");
    else
    printf("DEAD\n");
    if(sum_reach_2>=((count2*10)/2))
    printf("LIVE\n");
    else 
    printf("DEAD\n");
    getch();
}
        
