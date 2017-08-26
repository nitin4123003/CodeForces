#include<stdio.h>
#include<conio.h>
#include<string.h>
void sort( char s[100])
      {
           int i,j;
           char t;
           for(i=0;i<strlen(s);i++)
	       {
	       	for(j=0;j<strlen(s)-1;j++)
                      {
			                          if(s[i]<s[j])
		                           	{
			                        	t=s[i];
			                          	s[i]=s[j];
				                        s[j]=t;
		                         	}
                           }
         }
         return(s[100]);
      }


main()
{
      char a[100],b[100],c[100];
      int i,j,k,flag=0;
      gets(a);
      gets(b);
      gets(c);
      if(strlen(c)!=(strlen(a)+strlen(b)))
      printf("NO");
      else
      {
          strcat(a,b);
          sort(a);
          sort(c);
          puts(a);
          puts(c);
          if(strcmp(c,a)==0)
          printf("YES");
          else
          printf("NO");
      }
      getch();
}
      
