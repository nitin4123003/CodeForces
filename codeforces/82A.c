#include<stdio.h>
#include<conio.h>

int place(int n,int j)
{
    int count=1;
    while(n>j)
    {
        n=n-j;
        count++;
    }
    return(count);
}

int main()
{
    int i=5,sum=0,n,j=1,p;
    char name[5][15]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    scanf("%d",&n);
    while(i<n)
    {
        n=n-i;
        i=i*2;
        j=j*2;
    }
    p=place(n,j);
    printf("%s",name[p-1]);
    getch();
}
    

    
    
    
