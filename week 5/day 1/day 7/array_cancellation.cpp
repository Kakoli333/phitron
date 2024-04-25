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
        vector<ll>v(n);
        vector<ll>suff(n,0);
        ll ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            ans=max(0LL,ans+v[i]);
        }

        cout<<ans<<'\n';
        /*
                for(ll i=0; i<n; i++)
                {
                    for(ll j=i; j<n; j++)
                    {
                        suff[i]+=v[j];
                    }
                }

                sort(suff.begin(),suff.end());

                cout<<suff[suff.size()-1]<<'\n';
                 /*for(ll i=0; i<suff.size(); i++)
                 {
                     cout<<suff[i]<<" ";
                 }
                 cout<<endl;*/
    }
}

