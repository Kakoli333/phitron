//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll q;
    cin>>q;
    while(q--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;

        ll A=a*n+b;
        ll x=s%n;
        //cout<<x<<endl;
        if(x<=b && A>=s)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

