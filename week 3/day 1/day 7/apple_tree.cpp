#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

vector<ll>v1[2000005];
ll cnt[2000005];

void dfs_leaf(ll node,ll p)
{
    if(v1[node].size()==1 && node!=1)
        cnt[node]=1;
    for(ll child: v1[node])
    {
        if(child!=p)
        {
            dfs_leaf(child,node);
            cnt[node]+=cnt[child];
        }
    }
}

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
        for(ll i=1; i<=n; i++)
        {
            cnt[i]=0;
            v1[i].clear();
        }
        for(ll i=0; i<n-1; i++)
        {
            ll u,v;
            cin>>u>>v;
            v1[u].push_back(v);
            v1[v].push_back(u);
        }

        dfs_leaf(1,-1);

        ll q;
        cin>>q;
        while(q--)
        {
            ll x,y;
            cin>>x>>y;

            cout<<cnt[x]*cnt[y]<<endl;
        }
    }
}






