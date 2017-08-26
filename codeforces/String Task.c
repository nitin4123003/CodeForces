#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
      int i,j;
      char a[250]={0};
      gets(a);
      for(i=0;i<strlen(a);i++)
      {
                              if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'
                              ||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
                              {for(j=i;j<strlen(a);j++)
                              a[j]=a[j+1];
                              i=i-1;
                              }
      }
      strlwr(a);
      for(i=2*strlen(a);i>=2;i=i-2)
      {
                             a[i-1]=a[(i/2)-1];
                             a[i-2]='.';
      }
      puts(a);
      getch();
}
      
      
