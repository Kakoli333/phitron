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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n),bit(30,0);

        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<30; j++)
            {
                if((v[i]&(1<<j))!=0)
                    bit[j]++;
            }
        }

        for(ll i=1; i<=n; i++)
        {
            bool ans=true;
            ll x=0;

            for(ll j=0; j<30; j++)
            {
                if((bit[j]%i)!=0)
                {
                    ans=false;
                    break;
                }
                x|=(1<<j);
            }
            if(ans)
                cout<<i<<" ";
        }
        cout<<'\n';
    }
}


