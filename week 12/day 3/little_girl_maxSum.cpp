//**HARE KRUSHNA**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }


    vector<ll>d(n+1);
    for(ll i=1; i<=q; i++)
    {
        ll l,r;
        cin>>l>>r;

        l--;
        r--;
        d[l]++;
        d[r+1]--;
    }

    for(ll i=1; i<=n; i++)
    {
        d[i]=d[i-1]+d[i];
    }

    sort(v.begin(),v.end(),greater<ll>());
    sort(d.begin(),d.end(),greater<ll>());

    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        ans+=(1LL*d[i]*v[i]);
    }
    cout<<ans;

}
