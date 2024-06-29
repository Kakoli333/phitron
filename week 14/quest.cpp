//**HARE KRUSHN**//
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, c, d;
        cin >> n >> c >> d;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());


        ll l = 0, r = d;
        while (l < r)
        {
            ll x=l+(r-l+1)/2;
            ll ans=0;
            for(ll i=0; i<d; i++)
            {
                if(i%x<n)
                    ans+=v[i%x];
            }
            if(ans>=c)
                l=x;
            else r=x-1;
        }

        if(l==d)
            cout<<"Infinity\n";
        else if(l==0)
            cout<<"Impossible\n";
        else
            cout<<l-1<<endl;
    }
}
