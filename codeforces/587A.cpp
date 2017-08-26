#include<iostream>
using namespace std;
typedef long long int ll;
#include<vector>
#include<cmath>

int main()
{
    ll a=4;
    cout<<(a&(a-1))<<endl;
    ll n;
    cin>>n;

    ll i,j,elem;
    vector<ll> arr;
    for(i=0;i<n;i++)
    {
        cin>>elem;
        arr.push_back(elem);
    }


    i=0;
    ll count=0;
    while(i<n)
    {
        ll prod=0;
        j=i;
        int a=1;
        while(a)
        {
            prod=prod+pow(2,arr[j]);
            cout<<"j="<<j<<"and prod="<<prod<<endl;
            a=!(prod&(prod-1));
            j++;
        }
        cout<<"j="<<j<<endl;
        count++;
        i=j;
    }
    cout<<count;
}
