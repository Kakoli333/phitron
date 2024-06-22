//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const ll N=2e5+5;
ll ans[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    ll n,k,q;
    cin>>n>>k>>q;

    for(ll i=0; i<n; i++)
    {
        ll l,r;
        cin>>l>>r;
        ans[l]++;
        ans[r+1]--;
    }

    for(ll i=1; i<N; i++)
    {
        ans[i]+=ans[i-1];
    }

    for(ll i=0; i<N; i++)
    {
        if(ans[i]>=k)
            ans[i]=1;
        else
            ans[i]=0;
    }

    for(ll i=1; i<N; i++)
    {
        ans[i]+=ans[i-1];
    }

    for(ll i=0; i<q; i++)
    {
        ll a,b;
        cin>>a>>b;

        cout<<ans[b]-ans[a-1]<<endl;
    }
}



