#include<iostream>
using namespace std;
typedef long long int ll;
#include<vector>
#include<algorithm>
#include<climits>
int main()
{
    ll n,l;
    cin>>n>>l;
    vector<double> a;
    ll i;
    double elem;
    for(i=0;i<n;i++)
    {
        cin>>elem;
        a.push_back(elem);
    }
    int flag=0;
    sort(a.begin(),a.end());
    double max=-1;
    for(i=0;i<n-1;i++)
    {
        if((a[i+1]-a[i])>max)
        max=a[i+1]-a[i];
    }
    if((double)(l-a[n-1])>(double)(max/2.0))
    {
        max=l-a[n-1];
        flag=1;
    }
    if((double)(a[0]-0)>(double)(max/2.0))
    {
        max=a[0]-0;
        flag=1;
    }
    if(flag)
        cout<<(double)max<<endl;
    else
        cout<<(double)(max/2.0)<<endl;
}
