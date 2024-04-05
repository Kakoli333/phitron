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
        ll n,b;
        cin>>n>>b;
        vector<ll>v(n);
        ll b_and=-1;

        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            if((b&v[i])==b)
            {
                b_and&=v[i];
            }
        }

        //cout<<b_and<<endl;
        if(b_and==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}







