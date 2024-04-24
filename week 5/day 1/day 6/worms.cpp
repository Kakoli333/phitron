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


    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<ll>pref(n);
    pref[0]=v[0];

    for(ll i=1; i<n; i++)
    {
        pref[i]=pref[i-1]+v[i];
    }
    ll m;
    cin>>m;
    vector<ll>q(m);
    for(ll i=0; i<m; i++)
    {
        cin>>q[i];
    }

    ll cnt;
    vector<ll>ans;
    for(ll j=0; j<m; j++)
    {
        ll idx = lower_bound(pref.begin(), pref.end(), q[j]) - pref.begin();
        ans.push_back(idx + 1);
    }

    for(ll i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }

    /*for(ll i=0; i<n; i++)
    {
        cout<<pref[i]<<" ";
    }
    cout<<endl;*/
}




