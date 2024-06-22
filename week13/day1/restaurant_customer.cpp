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

    ll t;
    cin >> t;
    ll a,b;

    vector<pair<ll,bool>>v;

    while (t--)
    {
        cin>>a>>b;

        v.push_back({a,true});
        v.push_back({b,false});
    }

    sort(v.begin(),v.end());

    ll cnt=0,ans=0;
    for(ll i=0; i<v.size(); i++)
    {
        if(v[i].second==true)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
        {
            cnt--;
        }
    }
    cout<<ans<<endl;
}


