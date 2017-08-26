#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,t,a,b,da,db,i,j;
    scanf("%d%d%d%d%d%d",&x,&t,&a,&b,&da,&db);
    if(x==0||x==a||x==b)
    {
        printf("YES");
        exit(getch());
    }
    for(i=0;i<t;i++)
    {
        if(a-(i*da)==x)
        {
            printf("YES");
            exit(getch());
        }
    }
    for(i=0;i<t;i++)
    {
        if(b-(i*db)==x)
        {
            printf("YES");
            exit(getch());
        }
    }
            
    for(i=0;i<t;i++)
    {
        for(j=0;j<t;j++)
        {
            if((a-(i*da)+b-(j*db))==x)
            {
                printf("YES");
                exit(getch());
            }
        }
    }
    printf("NO");
    getch();
}
    
