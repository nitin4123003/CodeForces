#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[80],b[10][10];
    char c[8][10];
    int i,j,k=0;
    gets(a);
    for(i=0;i<10;i++)
    {
                     gets(b[i]);
    }
    for(i=0;i<8;i++)
    {
                     for(j=0;j<10;j++)
                     {
                                        c[i][j]=a[k];
                                        k++;
                     }
    }
    for(i=0;i<8;i++)
    {
                     for(j=0;j<10;j++)
                     printf("%c",c[i][j]);
                     printf("\n");
    }
    for(i=0;i<8;i++)
    {
                    for(j=0;j<10;j++)
                    {
                                     if(b[i][j]==c[i][j])
                                     flag=1;
                                     else
                                     {flag=0;
                                     break;}
                    }
    getch();
}
