#include<stdio.h>
int main()
{
    int n,s,t,cas=0;
    int i,j;
    char a[1000];
    scanf("%d",&n);
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='R'||a[i]=='L')
        break;
    }
    s=i+1;
    for(i=s-1;a[i]!='.';i++)
    {
        if(a[i]=='L')
        cas=1;
        else
        {
            cas=0;
            break;
        }
    }
    if(cas==0)
    {
        for(i=s-1;a[i]!='.';i++)
        {
            
            if(a[i]=='R')
            cas=2;
            else
            {
                cas=3;
                break;
            }
        }
    }
    /*printf("\ncase=%d\ti=%d\n",cas,i);*/
    switch(cas)
    {
        case 1:
            printf("%d\t%d",s,s-1);
            break;
            
        case 2:
            printf("%d\t%d",s,i+1);
            break;
            
        case 3:
            for(j=i;a[j]!='L';j++){}
            printf("%d\t%d",s,j);
            break;
    }
    
    getch();
}
