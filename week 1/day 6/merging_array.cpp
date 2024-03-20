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

    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }

    vector<ll>v;
    ll l=0,r=0;
    while(l<n || r<m)
    {
        if(l<n && r<m)
        {
            if(a[l]==b[r])
            {
                v.push_back(a[l]);
                v.push_back(b[r]);
                l++;
                r++;
            }
            else if(a[l]<b[r])
            {
                v.push_back(a[l]);
                l++;
            }
            else
            {
                v.push_back(b[r]);
                r++;
            }
        }
        else if(l<n)
        {
            v.push_back(a[l]);
            l++;
        }
        else if(r<m)
        {
            v.push_back(b[r]);
            r++;
        }

    }
    for(ll i=0; i<n+m; i++)
        cout<<v[i]<<" ";
}


