#include<stdio.h>
#include<conio.h>
main()
{
    int i,len,n;
    char a[110][110];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",&a[i]);
    for(i=0;i<n;i++)
    {
                    len=strlen(a[i]);
                    if(len>10)
                    {
                              printf("%c%d%c",a[i][0],(len-2),a[i][len-1]);
                    }
                    else
                    printf("%s",a[i]);
                    printf("\n");
    }
    getch();
}
    
