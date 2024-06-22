//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

map<pair<pair<ll,ll>,ll>,ll>two,three;

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

        ll cnt=0;
        two.clear();
        three.clear();

        for(ll i=2;i<n;i++)
        {
            ll tmp=three[{{v[i],v[i-1]},v[i-2]}];

            cnt+=two[{{0,v[i-1]},v[i-2]}]-tmp;
            cnt+=two[{{v[i],0},v[i-2]}]-tmp;
            cnt+=two[{{v[i],v[i-1]},0}]-tmp;

            two[{{0,v[i-1]},v[i-2]}]++;
            two[{{v[i],0},v[i-2]}]++;
            two[{{v[i],v[i-1]},0}]++;

            three[{{v[i],v[i-1]},v[i-2]}]++;
        }

        cout<<cnt<<endl;
    }
}
