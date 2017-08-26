#include<iostream>
#include<conio.h>
using namespace std;
 int main()
{
       long int n,m,a;
       long long int i,j;
      cin>>n>>m>>a;
      for(i=0;n>0;i++)
      n=n-a;
      for(j=0;m>0;j++)
      m=m-a;
      cout<<(i*j);
      getch();
      return(0);
}
