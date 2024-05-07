//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

//const ll mx=1e4;

bool possible(ll t,ll n,ll x,ll y)
{
    if(t<min(x,y))
        return false;

    ll cnt=1;
    t-=min(x,y);

    cnt+=t/x+t/y;

    return cnt>=n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    ll n,x,y;
    cin>>n>>x>>y;

    ll l=0,r=max(x,y)*n,mid;

    while(l+1<r)
    {
        mid=(l+r)/2;
        if(possible(mid,n,x,y))
        {
            r=mid;
        }
        else
        {
            l=mid;
        }
    }

    cout<<r;
}







