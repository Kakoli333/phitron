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
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<ll,ll>mp;
        ll cnt = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            mp[v[i]]++;

           // cout<<mp[v[i]]<<" ";
            if(mp[v[i]]>=2)
            {
                cnt=i+1;
                break;
            }
        }

        cout << cnt << endl;
    }
}
