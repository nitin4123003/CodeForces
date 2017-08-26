#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[100];
    int i,countup=0,countdown=0;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
                            if(a[i]>94)
                            countdown++;
                            else
                            countup++;
    }
    if(countdown>=countup)
    strlwr(a);
    else
    strupr(a);
    puts(a);
    getch();
}
