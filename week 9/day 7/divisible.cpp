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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);

        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }


        bool possible = true;
        for (ll i = 0; i < n; i++)
        {
            bool found = false;
            for (ll j = 1; j <= i + 1; j++)
            {
                if (v[i] % (j + 1) != 0)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

