#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    long long unsigned int y,k,n,i;
    cin>>y>>k>>n;
    /*cout<<y<<endl<<k<<endl<<n<<endl<<endl;*/
    if(y>=n)
    {
        cout<<"-1";
        exit(getch());
    }
    for(i=k;i<=n;i=i+k)
    {
        if(i>y)
        cout<<i-y<<endl;
    }
    getch();
}
    
