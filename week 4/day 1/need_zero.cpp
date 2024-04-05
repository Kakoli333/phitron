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
        ll n,XOR=0;
        cin>>n;

        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            XOR^=v[i];
        }

        ll ans=XOR;
        //cout<<ans<<endl;
        ll ans1=XOR;

        for(ll i=0; i<n; i++)
        {
            ans1^=((XOR^v[i]));
        }
        //cout<<ans1<<endl;
        if(ans==ans1)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }
}







