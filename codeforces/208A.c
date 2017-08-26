#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j;
    char a[200];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
                            if(a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
                            {
                                         a[i]=' ';
                                         for(j=i+1;j<strlen(a);j++)
                                         {a[j]=a[j+2];}
                            }
    }
    for(i=0;i<strlen(a);i++)
    {
                            if(a[i]==' ' && a[i+1]==' ')
                            {for(j=i;j<strlen(a);j++)
                            a[j]=a[j+1];
                            i--;
                            }
    }
    if(a[0]!=' ')
    puts(a);
    else
    {for(i=1;i<strlen(a);i++)
    printf("%c",a[i]);}
    getch();
}
