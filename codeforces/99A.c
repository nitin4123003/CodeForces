#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[1000];
    int n,i,j;
    scanf("%s",a);
    for(i=0;a[i]!='.';i++){}
    if(a[i-1]-48==9)
    {
        printf("GOTO Vasilisa.");
        exit(getch());
    }
    else
    {
        if(a[i+1]-48<5)
        {
            for(j=0;j<i;j++)
            printf("%c",a[j]);
        }
        else
        {
            for(j=0;j<i-1;j++)
            printf("%c",a[j]);
            n=(a[i-1]-48)+1;
            printf("%d",n);
        }
    }
    getch();
}
            
        
    
    
