#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,count=1,flag,c;
    char a[100],b[100];
    gets(a);
    b[0]=a[0];
    for(j=0;a[j]!='\0';j++)
    {
                         for(i=0;i<strlen(b);i++)
                         {
                                                 if(a[j]==b[i])
                                                 {
                                                             flag=1;
                                                             break;
                                                 }
                                                 else
                                                 flag=2;
                         }
                         if(flag==2)
                         {
                                    b[count]=a[j];
                                    count++;
                         }
    }
    c=int(count);
    printf("%d",count);
    if(count%2==0)
    printf("CHAT WITH HER!");
    else
    printf("IGNORE HIM!");
    getch();
}
                                                 
    
