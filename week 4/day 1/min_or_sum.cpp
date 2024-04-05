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
        ll n,OR=0;
        cin>>n;

       vector<ll>v(n);
       for(ll i=0;i<n;i++)
       {
           cin>>v[i];
           OR|=v[i];
       }

       ll ans=OR;
      // cout<<ans<<endl;
       for(ll i=0;i<n;i++)
       {
           ans=min(ans,(OR|v[i]));
       }

       cout<<ans<<endl;
    }
}








