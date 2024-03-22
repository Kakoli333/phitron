#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes count<<"Yes"
#define no cout<<"No"
int32_t main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(v[i]==x)
            continue;
        else
            cout<<v[i]<<" ";
    }
}





