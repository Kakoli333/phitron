#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

vector<ll>pal;

void getPal()
{
    ll mx=1<<15;

    for(ll i=0; i<mx; i++)
    {
        string str=to_string(i);
        string rev_str=str;
        reverse(str.begin(),str.end());
        if(str==rev_str)
        {
            pal.push_back(i);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    getPal();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        unordered_map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        ll cnt=0;

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<pal.size(); j++)
            {
                ll x=v[i]^pal[j];
                if(x<=v[i])
                    continue;
                if(mp.find(x)!=mp.end())
                {
                    cnt+=mp[x];
                }
            }
        }
        for(auto i:mp)
        {
            cnt+=(i.second*(i.second+1))/2;
        }
        cout<<cnt<<'\n';
    }
}








