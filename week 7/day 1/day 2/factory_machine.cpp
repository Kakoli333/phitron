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
        ll total=0;
        for(ll i=0; i<n; i++)
        {
            total+=(m/v[i]);
            if(total>=t)
            {
                return true;
            }
        }
        return false;
    };

    ll l=1,r=1e18,mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    cout<<ans;
}





