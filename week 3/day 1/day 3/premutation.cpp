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


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n][n-1];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<n-1; j++)
            {
                cin>>a[i][j];
            }
        }
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            mp[a[i][0]]++;
        }

        ll mx=0,val;
        for(auto it:mp)
        {
            if(it.second>mx)
            {
                mx=it.second;
                val=it.first;
            }
        }
        // cout<<val<<" ";
        ll x;
        for(ll i=0; i<n; i++)
        {
            ll check=0;
            for(ll j=0; j<n-1; j++)
            {
                if(a[i][0]!=val)
                {
                    x=i;
                    break;
                }
            }
        }
        //cout<<x<<endl;
        cout<<val<<" ";
        for(ll i=0; i<n-1; i++)
        {
            cout<<a[x][i]<<" ";
        }
        cout<<endl;
    }
}






