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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        char c;
        string s;
        cin>>n>>c>>s;
        s+=s;
        ll ans=0,x=0;
        for(ll i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='g')
            {
                x=i;
            }
            if(s[i]==c)
            {
                //cout<<x-i<<" ";
                //cout<<endl;
                ans=max(ans,x-i);
            }
        }
        cout<<ans<<endl;
    }
}


