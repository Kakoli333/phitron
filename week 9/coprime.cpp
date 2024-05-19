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

    vector<vector<ll>>ans(1001);

    for(ll i=1; i<=1000; i++)
    {
        for(ll j=1; j<=1000; j++)
        {
            if(__gcd(i,j)==1)
            {
                ans[i].push_back(j);
            }
        }
    }

    ll t;
    cin>>t;


    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n+1);
        for(ll i=1; i<=n; i++)
        {
            cin>>v[i];
        }

        vector<ll>mx(1001,-1);
        for(ll i=1; i<=n; i++)
        {
            mx[v[i]]=i;
        }

        ll cnt=-1;

        for(ll i=1; i<=1000; i++)
        {
            if(mx[i]==-1)
                continue;

            for(auto x:ans[i])
            {
                if(mx[x]!=-1)
                {
                    cnt=max(cnt,mx[i]+mx[x]);
                }
            }
        }

        if(cnt==0)
            cnt=-1;
        cout<<cnt<<endl;

    }
}




