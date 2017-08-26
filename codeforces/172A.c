#include<stdio.h>
#include<conio.h>
#include<string.h>
int strchk(char *c,char *d)
{
    int pos=1,flag;
    while(*c!='\0')
    {
                   if(*c!=*d)
                   {
                             flag=0;
                             break;
                   }
                   else
                   {
                       c++;
                       d++;
                       flag=1;
                       pos++;
                   }
    }
    if(flag==0)
    return(pos);
    else
    return(-1);
}  
int main()
{
    int i,point=0,n;
    char s[30000][21],a[21];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    gets(s[i]);
    strcpy(a,s[1]);
    for(i=2;i<=n;i++)
    {
                   point=strchk(a,s[i]);
                   if(point!=(-1))
                   a[point-1]='\0';
    }
    printf("%d",strlen(a));
    getch();
}
    
