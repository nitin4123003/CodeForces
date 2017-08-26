#include<conio.h>
#include<iostream>
using namespace std;

#define N 100000
int func(int num)
{
    int count=0;
    if(num==0)
    {
        return 0;
    }
    else if(num%2==0)
    {
        return 1;
    }
    else if(num==1)
    {
        return 1;
    }
    else if(num%2==1)
    {
        count=1+func(num/2);
        return(count);
    }
}
    
int main()
{
    long int n,i,j,count=0;
    long long int *a=(long long int *)malloc(N*sizeof(int));
    /*cout<<func(7);*/
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(func(a[i])==func(a[j]))
            count++;
        }
    }
    cout<<count;
    getch();
}  
