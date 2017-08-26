#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size=2*n+1;
    int mid=n;
    int mat[size][size];
    int print=0;
    int i,j;
    int inc=1,dec=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<n-print;j++)
            {
                if(j==0)
                    cout<<" ";
                else
                    cout<<" "<<" ";
            }
        int temp=0;
        for(j=mid-print;j<=mid;j++)
        {
            if(j==0)
                cout<<temp++;
            else
                cout<<" "<<temp++;
        }
        temp=temp-1;
        for(j=mid+1;j<=mid+print;j++)
        cout<<" "<<--temp;

        cout<<endl;
        if(print==mid)
        {
            inc=0;
            dec=1;
        }
        if(inc)
        print++;
        else if(dec)
        print--;
    }
}
