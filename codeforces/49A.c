#include<stdio.h>
int main()
{
    char a[110];
    int i,n;
    gets(a);
    n=strlen(a);
    /*printf("n=%d",n);*/
    i=n-2;
    while(a[i]==' ')
    {
        i=i-1;
    }
    /*printf("ch=%c\ni=%d",a[i],i);*/
    if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'||
        a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
    printf("YES");
    else
    printf("NO");
    getch();
}
