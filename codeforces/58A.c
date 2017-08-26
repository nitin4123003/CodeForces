#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
       int i,j,count=0,k,flag,counter=0;
       char a[100],b[]="hello";
       gets(a);
       for(i=0;i<5;i++)
       {
                               for(j=counter;j<strlen(a);j++)
                               {
                                                       if(b[i]==a[j])
                                                       {
                                                                       count++;
                                                                       break;
                                                       }
                               }
                               counter=j+1;
       }
       if( count==5)
       printf("YES");
       else
       printf("NO");
       getch();
}
