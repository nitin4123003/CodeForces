#include<iostream>
using namespace std;
#include<string.h>
#include<conio.h>
int main()
{
    string a;
    int count=0,tr=0;
    while(getline(cin,a))
    {
        if(a[0]=='+')
        count++;
        else if(a[0]=='-')
        count--;
        else
        tr+=count*(a.length()-a.find(':'));
    }
    cout<<tr;
    getch();
}
    
    
