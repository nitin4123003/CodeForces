#include<stdio.h>
#include<conio.h>
int main()
{
    int i,count1=0,count2=0;
    char a[100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
                            if(a[i]=='0')
                            {count1++;
                            if(count1>=7)
                            break;}
                            else
                            count1=0;
                            
    }
    for(i=0;i<strlen(a);i++)
    {
                            if(a[i]=='1')
                            {count2++;
                            if(count2>=7)
                            break;}
                            else
                            count2=0;
    }
    if(count1>=7 || count2>=7)
    printf("YES");
    else
    printf("NO");
    getch();
    return(0);
}
