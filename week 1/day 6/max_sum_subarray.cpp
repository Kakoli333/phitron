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

    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll l=0,r=0,sum=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if(r-l+1==k)
        {
            ans=max(ans,sum);
            sum-=v[l];
            l++;
            r++;
        }
        else{
            r++;
        }
    }
    cout<<ans;
}
