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


    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    //ll cnt10,cnt2=0,cnt=0,m1=1,mx=0;
    map<ll,ll>mp;

    for(ll i=0; i<n; i++)
    {
        for(ll j=2; j*j<=(v[i]); j++)
        {
            if(v[i]%j==0)
            {
                mp[j]++;

                while(v[i]%j==0)
                    v[i]/=j;
            }
        }

        if(v[i]>1)
            mp[v[i]]++;
    }

    ll cnt=1;
    for(auto [x,y]:mp)
    {
        cnt=max(cnt,y);
    }

    cout<<cnt;

}


