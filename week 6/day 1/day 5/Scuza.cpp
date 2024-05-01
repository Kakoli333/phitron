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
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n), pref,prefmx;
        pref.push_back(0);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
            pref.push_back(pref.back()+a[i]);
            if(i==0)
            {
                prefmx.push_back(a[i]);
            }
            else
            {
                prefmx.push_back(max(prefmx.back(),a[i]));
            }
        }

        for(ll i=0; i<q; i++)
        {
            ll k;
            cin>>k;

            ll it=upper_bound(prefmx.begin(),prefmx.end(),k)-prefmx.begin();
            cout<<pref[it]<<" ";
        }
        cout << endl;
    }
}
