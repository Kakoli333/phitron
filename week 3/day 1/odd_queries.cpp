#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes count<<"Yes"
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
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
            cin>>v[i];
        vector<ll>pref(n);
        pref[0]=v[0];
        for(ll i=1; i<n; i++)
        {
            pref[i]=pref[i-1]+v[i];
        }
       /* for(ll i=0; i<n; i++)
        {
            cout<<pref[i]<<" ";
        }
        cout<<endl;*/
        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            r=r-1;
            l=l-1;

            // cout<<pref[n-1]<<" "<<pref[l-1]<<" "<<pref[r+1]<<endl;
            ll ans;
            if(l>0)
                ans=pref[n-1]-(pref[r]-pref[l-1]);
            else
                ans=pref[n-1]-(pref[r]-0);

            ll sum=((r-l)+1)*k;
            //cout<<pref[l-1]<<" "<<pref[r]<<endl;
            //cout<<ans+sum<<endl;
            if((ans+sum)%2==1)
                cout<<"YES\n";
            else
                cout<<"NO\n";
            //cout<<ans<<endl;
            //cout<<pref[n]<<" "<<pref[r+1]<<" "<<pref[l]<<endl;


        }
    }
}


