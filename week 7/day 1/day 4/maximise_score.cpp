//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const ll mx=1e4;

int main()
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

        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll ans = abs(v[0] - v[1]);
        for(ll i = 1; i < n - 1; i++)
        {
            ll ans1= max(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
            ans = min(ans, ans1);
        }
        ans = min(ans, abs(v[n - 1] - v[n - 2]));

        cout<<ans<<endl;
    }
}
