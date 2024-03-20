#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes count<<"Yes"
#define no cout<<"No"
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }

    ll l=0,r=0,ans=0;
    while(r<m)
    {
        while(b[r]>a[l] && l<n)
        {
            ans++;
            l++;
        }
        r++;
        cout<<ans<<" ";
    }
}
