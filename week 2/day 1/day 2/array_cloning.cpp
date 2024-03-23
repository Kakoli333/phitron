#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        map<ll,ll> freq;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            freq[v[i]]++;
        }
        ll cnt=0;
        ll mx=0;
        for(auto i:freq)
        {
            mx=max(mx,i.second);
        }
        // cout<<mx;
        while(mx<n)
            {
                ll x=n-mx;
                ll y=mx;
                cnt++;
                cnt+=min(x,y);
                mx+=min(x,y);
            }
            cout<<cnt<<'\n';

    }
}









