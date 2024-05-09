//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"


bool pos(ll n,vector<ll>v,ll mid)
{
    multiset<ll>s;
    for(auto i:v)
    {
        s.insert(i);
    }

    for(ll i=1; i<=mid; i++)
    {
        if(s.empty())
        return false;;

        ll k=mid-i+1;
        auto it=s.upper_bound(k);
        if(it==s.begin())
            return false;
        it--;
        s.erase(it);

        if(!s.empty())
        {
            it=s.begin();
            ll ans=(*it);
            ans+=k;
            s.erase(it);
            s.insert(ans);
        }
    }
    return true;
}

int main()
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
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        //sort(v.begin(),v.end());

        ll l=0,r=n,mid=0,ans1=0;

        while(l<=r)
        {
            ll mid=(l+r)/2;

            if(pos(n,v,mid))
            {
                ans1=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }

        cout<<ans1<<endl;

    }
}
