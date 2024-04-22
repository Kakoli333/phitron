//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes count<<"Yes"
#define no cout<<"No"

char st(ll i)
{
    return 'a'+i-1;
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
        string s;
        cin>>s;
        ll n=s.size();

        vector<pair<char,ll>>ans;
        char mn=min(s[0],s[n-1]);
        char mx=max(s[0],s[n-1]);

        for(ll i=0; i<n; i++)
        {
            if(s[i]>=mn && s[i]<=mx)
            {
                ans.push_back({s[i],i});
            }
        }
        sort(ans.begin(),ans.end(),[&](pair<char,ll>a,pair<char,ll>b)
        {
            return a.second<b.second;
        });

        if(ans.size()>2)
        {
            sort(ans.begin()+1,ans.end()-1,[&](pair<char,ll>a,pair<char,ll>b)
            {
                if(s[0]>s[n-1])
                {
                    return a.first>b.first;
                }
                return a.first<b.first;
            });
        }

        vector<ll>seq;
        ll sum=0;
        seq.push_back(1);

        for(ll i=1; i<ans.size(); i++)
        {
            sum+=abs(ans[i-1].first-ans[i].first);
            seq.push_back(ans[i].second+1);
        }

        cout<<sum<<" "<<seq.size()<<'\n';
        for(auto i:seq)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
}


