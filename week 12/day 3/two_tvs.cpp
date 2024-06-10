//**HARE KRUSHNA**//
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
    map<ll,ll>mp;
    for(ll i=1;i<=t;i++)
    {
        ll l,r;
        cin>>l>>r;

        l--,r--;
        mp[l]++;
        mp[r+1]--;
        }

    ll sum=0;
    //bool flag=true;

    for(auto [idx,value]:mp)
    {
        sum+=value;
        if(sum>2)
        {
           cout<<"NO\n";
           return 0;
        }
    }


     cout<<"YES\n";
     return 0;

}
