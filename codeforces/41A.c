#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char s[200],t[200],temp;
    gets(s);
    gets(t);
    int i,n;
    n=strlen(s);
    for(i=0;i<(n/2);i++)
    {
        temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    if(strcmp(s,t)==0)
    printf("YES");
    else
    printf("NO");
    getch();
}
                            
