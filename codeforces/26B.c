#include<stdio.h>
#include<stdlib.h>
int main()
{
    int count=0,i,max=0;
    char *a=(char*)malloc(1000000*sizeof(char));
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(count==0 && a[i]==')')
        continue;
        else
        {
            if(a[i]=='(')
            count++;
            if(a[i]==')')
            {
                count--;
                max++;
            }
            if(count<0)
            break;
        }
    }
    printf("%d",max*2);
    getch();
}        
