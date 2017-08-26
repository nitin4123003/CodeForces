#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,count1=0,count2=0,n;
    char a[100][50],team1[10],team2[10];
    scanf("%d",&n);
    if(n==1)
    {
            scanf("%s",&team1);
            puts(team1);
    } 
    else
    {
            for(i=0;i<n;i++)
            scanf("%s",&a[i]);
            strcpy(team1,a[0]);
            for(j=1;j<n;j++)
            {
                             if(strcmp(a[0],a[j])!=0)
                            {
                                    strcpy(team2,a[j]);
                                    break;
                            }
            }
            for(i=0;i<n;i++)
            {
                    if(strcmp(a[i],team1)==0)
                    count1++;
                    else
                    count2++;
            }
            /*printf("%d%d",count1,count2);*/
            if(count1>count2)
            puts(team1);
            else
            puts(team2);
    }
    getch();
}
                    
