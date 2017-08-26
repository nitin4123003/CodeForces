#include<iostream>
using namespace std;
#include<vector>
typedef long int ll;
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
    ll m;
    cin>>m;
    vector<ll> arr2;
    for(i=0;i<m;i++)
    {
        cin>>elem;
        arr2.push_back(elem);
    }

    for(i=1;i<n;i++)
    arr[i]=arr[i]+arr[i-1];

    for(i=0;i<m;i++)
    {
        vector<ll>::iterator index=lower_bound(arr.begin(),arr.end(),arr2[i]);
        cout<<index-arr.begin()+1<<endl;
    }
    return 0;
}
