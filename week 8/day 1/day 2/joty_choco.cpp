//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll gcd(ll a,ll b)
{
    return __gcd(a,b);
}

ll lcm(ll a,ll b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    ll x=n/a,y=n/b,z=n-x-y,xx=n/(lcm(a,b));

    //cout<<x<<" "<<y<<" "<<xx<<" "<<z<<endl;
    ll ans;

    ans=((x-xx)*p)+((y-xx)*q)+((xx)*(max(p,q)));


    cout<<ans;
}


