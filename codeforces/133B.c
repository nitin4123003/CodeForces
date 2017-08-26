#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,d=0;
    long long int num=0;
    char p[102],bin[500]="";
    gets(p);
    for(i=0;i<strlen(p);i++)
    {
                           if(p[i]=='>')
                           strcat(bin,"1000");
                           if(p[i]=='<')
                           strcat(bin,"1001");
                           if(p[i]=='+')
                           strcat(bin,"1010");
                           if(p[i]=='-')
                           strcat(bin,"1011");
                           if(p[i]=='.')
                           strcat(bin,"1100");
                           if(p[i]==',')
                           strcat(bin,"1101");
                           if(p[i]=='[')
                           strcat(bin,"1110");
                           if(p[i]==']')
                           strcat(bin,"1111");
    }
    for(i=0;i<strlen(bin);i++)
    {
                            d=bin[strlen(bin)-1-i]-48;
                            num=num+(d*pow(2,i));
    }
    printf("%I64d",num%1000003);
    getch();
}
