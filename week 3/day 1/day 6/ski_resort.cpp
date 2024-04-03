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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
            cin>>v[i];

        ll l=0;
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]<=q)
            {
                l++;
                if(l>=k)
                    ans+=l-k+1;
            }
            else
                l=0;
        }
        cout<<ans<<endl;
    }
}


