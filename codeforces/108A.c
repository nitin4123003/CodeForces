#include<stdio.h>
int main()
{
    int i,j,flag=0;
    char a[5];
    gets(a);
    if((a[3]<a[1]) || (a[3]==a[1] && a[4]<a[0]))
    cas=1;
    else 
    cas=2;
    if(cas==1)
    printf("%d%d:%d%d",)
    for(i=a[0]-48;i<=2;i++)
    {
        flag=0;
        if(i==2)
        {
            if(a[1]==3)
            for(j=a[1]-48+1;j<=3;j++)
            {
                printf("%d%d:%d%d\n",i,j,j,i);
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
        for(j=a[1]-48+1;j<=9;j++)
        {
            printf("%d%d:%d%d\n",i,j,j,i);
            flag=1;
            break;
        }
        if(flag==1)
        break;
    }
    getch();
}
