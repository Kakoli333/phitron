//Hare Krushn//

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
        ll n,c;
        cin>>n>>c;
        vector<ll>v(n+1);
        for(ll i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        for(ll i=1; i<=n; i++)
        {
            v[i]=v[i]+i;
        }
        sort(v.begin(),v.end());

        ll cnt=0,sum=0;
        for(ll i=1; i<=n; i++)
        {
            sum+=v[i];
            if(sum<=c)
            {
                cnt++;
            }
        }

        cout<<cnt<<'\n';
    }
}
