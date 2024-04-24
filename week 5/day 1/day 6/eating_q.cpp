//Hare Krushn//

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


    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        vector<ll>pref(n+1,0);

        for(ll i=0; i<n; i++)
        {
            pref[i+1]=pref[i]+v[i];
        }
        for(ll i=0; i<q; i++)
        {
            ll x;
            cin>>x;

            ll l=0,r=n,ans=-1;
            while(l<=r)
            {
                ll mid=(l+r)/2;
                if(x<=pref[mid])
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }

            cout<<ans<<'\n';
        }
    }
}


