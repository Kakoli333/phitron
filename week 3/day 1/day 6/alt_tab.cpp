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

    ll n;
    cin>>n;
    vector<string>v(n);
    map<string,ll>mp;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    //for(auto p:mp)
    // cout<<p.first<<" "<<p.second<<endl;


    vector<string>v1(n);
    for(ll i=n-1; i>=0; i--)
    {
        if(mp[v[i]]>0)
        {
            v1.push_back(v[i]);
            mp[v[i]]=0;
        }
    }

    for(ll i=0;i<v1.size();i++)
    {
        ll ans=v1[i].size();
        cout<<v1[i][ans-2]<<v1[i][ans-1];
    }

}



