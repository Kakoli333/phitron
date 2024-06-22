//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const ll maxN=1e2+9;

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
        map<ll,ll>mp;
        vector<ll>a,b;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;

            if(mp[v[i]]>1 && v[i]<=n)
            {
                a.push_back(v[i]);
            }
            else if(v[i]>n)
            {
                a.push_back(v[i]);
            }
        }
        sort(a.begin(),a.end());

        ll aa=a.size();
        reverse(a.begin(),a.end());

        ll f=true;
        for(ll i=0; i<n; i++)
        {
            if(mp[i+1]==0)
            {
                ll z=a.back();
                a.pop_back();

                ll y=i+1;
                if(z%(z-y)==y)
                {
                    continue;
                }
                else
                {
                    f=false;
                }
            }
        }
        if(f)
            cout<<aa<<endl;
        else
            cout<<-1<<endl;
    }
}
