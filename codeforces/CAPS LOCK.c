#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int i,flag=0;
    char a[100];
    gets(a);
    for(i=1;i<strlen(a);i++)
    {
                            if(a[i]>=97)
                            {flag=1;
                            break;}
    }
    if(flag==0)
    {
               for(i=0;i<strlen(a);i++)
               {
                                       if(a[i]>=97)
                                       a[i]=a[i]-32;
                                       else
                                       a[i]=a[i]+32;
               }
    }
    puts(a);
    getch();
}
