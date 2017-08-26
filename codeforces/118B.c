#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int size=2*n+1
    int mid=n;
    int mat[size][size];
    int print=0;
    for(i=0;i<size;i++)
    {
        for(j=mid-print;j<mid+print;j++)
        cout<<print<<" ";
        cout<<endl;
        if(print<mid)
        print++;
        else
        print--;
    }
}
