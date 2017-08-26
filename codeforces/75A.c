#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c;
    scanf("%I64d%I64d",&a,&b);
    c=a+b;
    printf("\n%I64d\n",c);
    a=rem_zero(a);
    b=rem_zero(b);
    c=rem_zero(c);
    printf("a=%I64db=%I64dc=%I64d",a,b,c);
    a=a+b;
    if(a==c)
    printf("YES");
    else
    printf("NO");
    getch();
}

int rem_zero(long long int a)
{
    int i=0,k,a1[30];
    long long int num=0;
    while(a!=0)
    {
        if((a%10)!=0)
        {
            a1[i]=a%10;
            i++;
        }
        a=a/10;
    }
    for(k=0;k<i;k++)
    printf("a[]=%d\n",a1[k]);
    for(k=0;k<i;k++)
    {num+=a1[k]*pow(10,k);printf("%I64d\n",num);}
    printf("num=%I64d\n",num);
    return(num);
}
