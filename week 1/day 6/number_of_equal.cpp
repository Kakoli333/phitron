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
    while(l<n && r<m)
    {
        ll cnt1=0,cnt2=0,curr=a[l];
        while(a[l]==curr && l<n)
        {
            cnt1++;
            l++;
        }

        while(curr>b[r] && r<m)
        {
            r++;
        }
        while(b[r]==curr && r<m)
        {
            cnt2++;
            r++;
        }
        ans+=(cnt1*cnt2);
    }
    cout<<ans;
}

