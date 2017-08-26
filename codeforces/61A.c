#include<stdio.h>
#include<conio.h>
int main()
{
    char num1[100],num2[100];
    int num3[100],i,dig1=0,dig2=0;
    gets(num1);
    gets(num2);
    for(i=0;i<strlen(num1);i++)
    {
                               dig1=num1[i]-48;
                               dig2=num2[i]-48;
                               if(dig2-dig1==0)
                               num3[i]=0;
                               else
                               num3[i]=1;
    }
    for(i=0;i<strlen(num1);i++)
    printf("%d",num3[i]);
    getch();
}
    
