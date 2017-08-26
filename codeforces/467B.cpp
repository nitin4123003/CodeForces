#include<iostream>
using namespace std;
typedef long long int ll;
#include<string>
#include<algorithm>
#include<vector>

string binRep(int num,int n)
{
    string s="";
    while(num!=0)
    {
        int n=num%2;
        s+=(n+48);
        num=num/2;
    }
    int i=0;
    while(i<n-s.length())
        s=s+'0';
    reverse(s.begin(),s.end());
    return s;
}

int differBits(string a,string b)
{
    int i,count=0;
    for(i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
            count++;
    }
    return count;
}

int main()
{
    //cout<<binRep(17)<<endl;
    int n,m,k;
    int i,elem;
    cin>>n>>m>>k;
    vector<ll> arr;
    for(i=0;i<m+1;i++)
    {
        cin>>elem;
        arr.push_back(elem);
    }
    vector<string> bin;
    for(i=0;i<m+1;i++)
    {
        string s=binRep(arr[i],n);
        bin.push_back(s);
    }

    //for(i=0;i<m+1;i++)
    //cout<<bin[i]<<endl;

    string mth=bin[m];
    int count=0;
    for(i=0;i<m;i++)
    {
        if(differBits(mth,bin[i])<=k)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
