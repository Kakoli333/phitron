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
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        ll l=0,r=INT_MAX,mid,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            ll sum=0;

            for(ll i=0; i<n; i++)
            {
                sum+=max(0LL,mid-v[i]);
            }

            if(sum<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }

        cout<<ans<<endl;

    }
}


