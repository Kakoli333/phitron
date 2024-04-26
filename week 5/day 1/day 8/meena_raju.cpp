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


    ll c=1;
    while (true)
    {
        ll N, Q;
        cin >> N >> Q;

        if (N == 0 && Q == 0)
            break;

        vector<ll> v(N);
        for (ll i = 0; i < N; ++i)
            cin >> v[i];

        sort(v.begin(),v.end());

        cout << "CASE# " << c << ":" << endl;
        for (ll i = 0; i < Q; ++i)
        {
            ll query;
            cin >> query;

            auto it = lower_bound(v.begin(), v.end(), query);
            if (it != v.end() && *it == query)
                cout << query << " found at " << (it - v.begin() + 1) << endl;
            else
                cout << query << " not found" << endl;
        }
        c++;
    }
}
