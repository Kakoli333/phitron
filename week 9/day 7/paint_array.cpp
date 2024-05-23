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

        ll v1 = 0, v2 = 0;

        for(ll i=0; i<n; i+=2)
            v1 = __gcd(v1, v[i]);
        for(ll i=1; i<n; i+=2)
            v2 = __gcd(v2, v[i]);

        bool flag1 = true, flag2 = true;

        for(ll i=1; i<n; i+=2)
        {
            if(v[i] % v1 == 0)
            {
                flag1 = false;
                break;
            }
        }

        if(flag1)
        {
            cout << v1 << endl;
            continue;
        }

        for(ll i=0; i<n; i+=2)
        {
            if(v[i] % v2 == 0)
            {
                flag2 = false;
                break;
            }
        }

        if(flag2)
        {
            cout << v2 << endl;
            continue;
        }

        cout << 0 << endl;
    }
}
