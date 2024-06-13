//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

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
        vector<set<ll>> st(n);
        set<ll> a;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            for (ll j = 0; j < x; j++)
            {
                ll val;
                cin >> val;
                st[i].insert(val);
                a.insert(val);
            }
        }

        ll mx = 0;

        for(auto i:a)
        {
            set<ll>tmp;

            for(auto j:st)
            {
                if(j.count(i)==0)
                {
                    tmp.insert(j.begin(),j.end());
                }
            }
            mx = max(mx, (ll)tmp.size());
        }

        cout << mx << endl;
    }
}
