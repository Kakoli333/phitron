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
        ll  n,m,h;
        cin>>n>>m>>h;
        vector<ll>a(n),b(m);
        for(ll i=0; i<n; i++)
            cin>>a[i];

        for(ll i=0; i<m; i++)
            cin>>b[i];

        sort(a.begin(),a.end(),greater<ll>());
        sort(b.begin(),b.end(),greater<ll>());

        ll sum=0;

        for(ll i=0; i<min(n,m); i++)
        {
            sum+=min(1ll*a[i],1ll*h*b[i]);
        }

        cout<<sum<<endl;
    }
}

