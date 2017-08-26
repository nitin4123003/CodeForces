#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll> arr;
    ll i,j,elem;
    for(i=0;i<n;i++)
    {
        cin>>elem;
        arr.push_back(elem);
    }
    sort(arr.begin(),arr.end());
    ll max_diff=arr[arr.size()-1]-arr[0];
    cout<<max_diff<<" ";

    ll minm=arr[0];
    ll maxm=arr[arr.size()-1];
    int flag=0;
    ll count1=0,count2=0;
    if(minm==maxm)
        flag=1;
    else
    {
        flag=2;

        for(i=0;i<arr.size();i++)
        {
        if(arr[i]==minm)
            count1++;
        if(arr[i]==maxm)
            count2++;
        }
    }

    if(flag==1)
        cout<<(n*(n-1))/2<<endl;
    else if(flag==2)
        cout<<count1*count2<<endl;
}
