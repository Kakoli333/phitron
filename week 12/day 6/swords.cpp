//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const ll m=100005;
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
    ll mx=v[n-1],z=0;

    for(ll i=0; i<n; i++)
    {
        z=__gcd(z,mx-v[i]);
    }


    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        sum+=(mx-v[i])/z;
    }

    cout<<sum<<" "<<z<<endl;
}
















