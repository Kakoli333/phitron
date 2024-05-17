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

    ll n,a,b;
    cin>>n>>a>>b;

    ll ans=0;
    for(ll i=1; i<n; i++)
    {
        ans=max(ans,min(a/i,(b/(n-i))));
    }

    cout<<ans<<endl;

}




