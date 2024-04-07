#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

ll check_kth_bit_on_off(ll x, ll y)
{
    return (x >> y) & 1;
}

ll print_on_ans_off_bits(ll x)
{
    ll pos = -1;
    for (ll k = 0; k <= 31; k++)
    {
        if (check_kth_bit_on_off(x, k))
        {
            pos = k;
        }
    }
    return pos;
}

ll turn_on_kth_bit(ll x, ll k)
{
    return (x | (1 << k));
}

ll turn_off_kth_bit(ll x, ll k)
{
    return (x & (~(1 << k)));
}

ll toggle_kth_bit(ll x, ll k)
{
    return (x ^ (1 << k));
}

int main()
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

        vector<ll> v(n), v1;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<ll,vector<ll>>mp;
        for (ll i = 0; i < n; i++)
        {
            ll x = print_on_ans_off_bits(v[i]);
            mp[x].push_back(i);
        }

        /* for (ll i = 0; i < n; i++)
             cout << v1[i] << " ";
         cout << endl;*/
        ll ans=0;
        for(auto it:mp)
        {
            ll s=it.second.size();
            s--;
            ans+=(s*(s+1))/2;
        }
        cout<<ans<<endl;
    }
}
