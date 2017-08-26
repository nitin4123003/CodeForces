#include<stdio.h>
#include<conio.h>
void main()
{
     char a[100];
     int len;
     gets(a);
     len=strlen(a);
     printf("%c%d%c",a[0],len-2,a[len-1]);
     getch();
}
