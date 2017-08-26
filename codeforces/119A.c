#include<stdio.h>
#include<conio.h>
int main()
{
    int i,a,b,n,t1,t2,winner,flag=2;
    scanf("%d%d%d",&a,&b,&n);
    for(i=0;n>0;i++)
    {
                 t1=a;
                 t2=b;
                 while(t1>0)
                 {
                        
                        if(a%t1==0 && n%t1==0)
                        {n=n-t1;
                        flag=0;
                        break;}
                        else 
                        t1--;
                 }
                 while(t2>0&&n>0)
                 { 
                            if(b%t2==0 && n%t2==0)
                            {n=n-t2;
                            flag=1;
                            break;}
                            else 
                            t2--;
                 }
    }
    winner=flag==0?0:1;
    printf("%d",winner);
    getch();
}
                 
                        
