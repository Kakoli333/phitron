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

    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        ll q;
        cin>>q;

        auto it=lower_bound(v.begin(),v.end(),q);


        cout<<it-v.begin()+1<<'\n';
    }
}




