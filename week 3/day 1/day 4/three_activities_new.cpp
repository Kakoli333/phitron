#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first > b.first;
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
        vector<pair<ll, ll>> a(n),b(n),c(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i].first;
            a[i].second = i;
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i].first;
            b[i].second = i;
        }
        for(ll i=0; i<n; i++)
        {
            cin>>c[i].first;
            c[i].second = i;
        }

        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        sort(c.begin(), c.end(), cmp);
        ll sum=0;
        for(ll i=0; i<3; i++)
        {
            for(ll j=0; j<3; j++)
            {
                for(ll k=0; k<3; k++)
                {
                    if(a[i].second != b[j].second && b[j].second != c[k].second && c[k].second != a[i].second)
                    {
                        sum=max(sum,a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }
        cout<<sum<<endl;
    }
}
