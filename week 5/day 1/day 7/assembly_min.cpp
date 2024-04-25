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


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x=n*(n-1)/2;
        vector<ll>v(x);

        for(ll i=0; i<x; i++)
        {
            cin>>v[i];
            // ans.insert(v[i]);
        }

        sort(v.begin(),v.end());
        vector<ll>ans;
        // ans[0]=v[0];
        for(ll i=0; i<x; i+=--n)
        {
            cout<<v[i]<<" ";
        }

        cout<<1000000000<<endl;

    }
}





