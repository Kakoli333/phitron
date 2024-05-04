//**HARE KRUSHN**//
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



    ll n,t;
    cin>>n>>t;

    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    //lemda function
    auto ok=[&](ll m)
    {
        ll cnt=0;
        for(ll i=(n/2); i<n; i++)
        {
            cnt+=(v[i]<m?(m-v[i]):0);
        }
        return cnt<=t;
    };

    ll l=1,r=2e9,mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    cout<<ans;
}






