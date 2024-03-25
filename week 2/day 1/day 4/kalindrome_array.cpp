#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

bool check(vector<ll> v,ll x)
{
    ll n=v.size(),i=0,j=n-1;
    while(i<j)
    {
        if(v[i]==x)
            i++;
        else if(v[j]==x)
            j--;
        else if(v[i]!=v[j])
            return 0;
        else
        {
            i++;
            j--;
        }
    }
    return 1;
}
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
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        bool flag=true;
        for(ll i=0; i<n-1-i; i++)
        {
            if(v[i]!=v[n-1-i])
            {
                flag=check(v,v[i] || check(v,v[n-1-i]));
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
}





















