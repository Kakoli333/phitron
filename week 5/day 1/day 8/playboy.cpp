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

    ll n;
    cin >> n;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll q;
    cin >> q;

    for (ll i = 0; i < q; ++i)
    {
        ll query;
        cin >> query;

        auto lower = lower_bound(v.begin(), v.end(), query);
        ll shorter = (lower == v.begin()) ? -1 : *(--lower);

        auto upper = upper_bound(v.begin(), v.end(), query);
        ll taller = (upper == v.end()) ? -1 : *upper;

        if (shorter != -1)
            cout << shorter;
        else
            cout << "X";

        cout << " ";

        if (taller != -1)
            cout << taller;
        else
            cout << "X";

        cout << endl;
    }
}

