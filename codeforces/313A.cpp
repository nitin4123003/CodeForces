#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int a=0,b=0;
    char s[12];
    int i;
    cin>>s;
    if(s[0]!='-')
    cout<<s;
    else
    {
        for(i=1;i<=strlen(s)-2;i++)
        {
            a=a*10;
            a=a+(s[i]-48);
        }
        for(i=1;i<strlen(s);i++)
        {
            if(i==strlen(s)-2)
            continue;
            else
            {
                b=b*10;
                b=b+(s[i]-48);
            }
        }
        /*cout<<a<<"\t"<<b;*/
        a=a<b?a:b;
        if(a==0)
        cout<<"0";
        else
        cout<<"-"<<a;
    }
    getch();
}
    
