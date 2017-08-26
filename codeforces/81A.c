#include<stdio.h>
#include<conio.h>
#define MAX 200000
void push(char stack[],int *top,char val)
{
     *top=*top+1;
     stack[*top]=val;
}
char pop(char stack[],int *top)
{
     *top=*top-1;
}
int main()
{
    int i,top=-1;
    char a[MAX],stack[100],*p;
    gets(a);
    push(stack,&top,a[0]);
    p=&a[1];
    while(*p!='\0')
    {
                           if(stack[top]==*p && top!=-1)
                           pop(stack,&top);
                           else
                           push(stack,&top,*p);
                           p++;
    }
    for(i=0;i<=top;i++)
    printf("%c",stack[i]);
    getch();
}
    
    
