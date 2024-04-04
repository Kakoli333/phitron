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
        map<ll,ll>mp;

        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;

        }
        sort(v.begin(),v.end());

        ll cnt=0;
       for(ll i=0;i<n;i++)
       {
           ll val=v[i];
           if(mp[v[i]]!=0)
           {
               cnt++;
               while(mp[val]>0)
               {
                   mp[val]--;
                   val++;
               }
           }
       }

        cout<<cnt<<endl;
    }
}






