#include<stdio.h>
#include<conio.h>
int main()
{
    char a[80];
    char b[10][10],c[10][10];
    int i,j,k=0;
    gets(a);
    for(i=0;i<10;i++)
    gets(b[i]);
    for(i=0;i<10;i++)
    {
                     for(j=0;j<10;j++)
                     {
                                        c[i][j]=a[k];
                                        k++;
                     }
    }
    for(i=0;i<10;i++)
    puts(c[i]);
    getch();
}
