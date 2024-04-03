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
        ll n;
        cin>>n;
        vector<string>v(n);
        set<string>s;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
            s.insert(v[i]);
        }
        for(ll i=0; i<n; i++)
        {
            if(v[i].size()==1)
            {
                cout<<"0";
                continue;
            }
            bool ans=true;
            for(ll j=0; j<v[i].size(); j++)
            {
                string l=v[i].substr(0,j);
                string r=v[i].substr(j,v[i].size());
                if(s.count(l) && s.count(r))
                {
                    cout<<"1";
                    ans=false;
                    break;
                }
            }
            if(ans)
                cout<<"0";
        }
        cout<<endl;
    }
}

