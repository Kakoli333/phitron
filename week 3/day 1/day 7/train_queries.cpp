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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        map<ll,vector<ll>>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }


        while(k--)
        {
            ll a,b;
            cin>>a>>b;

            if(mp[a].empty() || mp[b].empty())
            {
                cout<<"NO\n";
                continue;
            }

            if(mp[a].front()<mp[b].back())
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}





