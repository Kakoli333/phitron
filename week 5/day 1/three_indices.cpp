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
        bool flag=false;
        vector<ll>ans;

        for(ll i=1; i<=n-2; i++)
        {
            if(v[i+1]>v[i])
            {
                if(v[i+1]>v[i+2])
                {
                    ans.push_back(i);
                    ans.push_back(i+1);
                    ans.push_back(i+2);
                    flag=true;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"YES\n";
            for(ll i=0; i<ans.size(); i++)
                cout<<ans[i]<<" ";
            cout<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
}
