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
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    ll sum=0,l=0,r=0,ans=0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans=max(ans,r-l+1);
        }
        else
        {
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout<<ans;
}



