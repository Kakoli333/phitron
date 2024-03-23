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


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            string s;
            cin>>s;
            for(auto c:s)
            {
                if(c=='D')
                {
                    v[i]++;
                    if(v[i]==10)
                        v[i]=0;
                }
                else
                {
                    v[i]--;
                    if(v[i]==-1)
                        v[i]=9;
                }
            }
        }
        for(ll i=0;i<n;i++)
            cout<<v[i]<<" ";
        cout<<'\n';
    }
}










