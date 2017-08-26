#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    int i,j,m,flag=2;
    char a[100],b[100];
    gets(a);
    gets(b);
    strlwr(a);
    strlwr(b);
    for(i=0;i<strlen(a);i++)
    {
                            if(b[i]-a[i]>0)
                            {flag=0;
                            break;}
                            else 
                            if(b[i]-a[i]<0)
                            {flag=1;
                            break;}
    }
    if(flag==0)
    m=-1;
    else
    if(flag==1)
    m=1;
    else 
    m=0;
    printf("%d",m);
    getch();
}
    
