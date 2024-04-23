//Hare Krushn//

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
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());

    ll k;
    cin>>k;
    while(k--)
    {
        ll l,r;
        cin>>l>>r;

        auto s1=lower_bound(v.begin(),v.end(),l);
        auto s2=upper_bound(v.begin(),v.end(),r);

        cout<<s2-s1<<" ";
    }
}


