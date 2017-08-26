#include<iostream>
using namespace std;
#include<stdlib.h>
#include<conio.h>
int main()
{
    string s;
    long int i,j;
    int flag=0;
    getline(cin,s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0')
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        for(i=0;s[i]!='0';i++)
        printf("%c",s[i]); 
        for(j=i+1;s[j]!='\0';j++)
        printf("%c",s[j]);
    }
    else
    {
        for(j=1;s[j]!='\0';j++)
        printf("%c",s[j]);
    }
    getch();
}
