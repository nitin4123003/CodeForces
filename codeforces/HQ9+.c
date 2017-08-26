#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
      int i=0,flag=0;
      char a[105];
      gets(a);
      while(i<strlen(a))
      {
                        if((a[i]>=33&&a[i]<=126) && (a[i]=='H'||a[i]=='Q'||a[i]=='9'))
                        {flag=1;
                        break;}
                        i++;
      }
      if(flag==1)
      printf("YES");
      else
      printf("NO");
      getch();
}
