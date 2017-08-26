#include<stdio.h>
#include<conio.h>
int main()
{
     int a[4];
    int count=0,i,j;
    for(i=0;i<4;i++)
    scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
                    for(j=i+1;j<4;j++)
                    {
                                      if(a[i]==a[j])
                                      {count++;}
                    }
    }
    switch(count)
    {
                 case 0:
                      printf("0");
                       break;
                 case 1:
                      printf("1");
                      break;
                 case 3:
                      printf("2");
                      break;
                 case 6:
                      printf("3");
                      break;
    }
    getch();
}
    
