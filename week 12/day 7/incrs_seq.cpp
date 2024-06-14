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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        vector<ll>ans(n);
        if(v[0]==1)
            ans[0]=2;
        else
            ans[0]=1;

        for(ll i=1; i<n; i++)
        {
            if(ans[i-1]+1!=v[i])
                ans[i]=ans[i-1]+1;
            else
                ans[i]=ans[i-1]+2;
        }

        cout<<ans[n-1]<<endl;
    }
}

