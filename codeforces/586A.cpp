#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        break;
    }
    int count=0;
    while(i<n)
    {
        count++;
        if(a[i-1]==0 && a[i]==0||a[i+1]==0 && i+1==n-1)
        {
            count--;
            break;
        }

        i++;
    }
    cout<<count<<endl;
    return 0;
}
