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
       ll n,m;
       cin>>n>>m;
       vector<string>v(n);
       for(ll i=0;i<n;i++)
       {
           cin>>v[i];
       }
       ll mn=INT_MAX;
       for(ll i=0;i<n;i++)
       {
           for(ll j=i+1;j<n;j++)
           {
               ll cnt=0;
               for(ll k=0;k<m;k++)
               {
                   //cout<<v[i][k]<<" "<<v[j][k]<<endl;
                   cnt+=abs(v[i][k]-v[j][k]);
               }
               mn=min(mn,cnt);
           }
       }
       cout<<mn<<'\n';

    }

}
















