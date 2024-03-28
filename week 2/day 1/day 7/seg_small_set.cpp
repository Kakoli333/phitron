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


    ll n,s;
    cin>>n>>s;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    map<ll,ll> freq;
    ll x=0,ans=0,l=0,r=0;
    for(ll i=0; i<n; i++)
    {
        if(freq[v[i]]==0)
        {
            x++;
        }
        freq[v[i]]++;

        while(x>s)
        {
            freq[v[l]]--;
            if(freq[v[l]]==0)
            {
                x--;
            }
            l++;
        }
        ans+=i-l+1;
    }
    cout<<ans;
}
