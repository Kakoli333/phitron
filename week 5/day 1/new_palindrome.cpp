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
        string s;
        cin>>s;
        int cnt=0;
        for(ll i=0;i<s.size()/2-1;++i)
        {
            if(s[i]!=s[i+1])
            {
                cnt++;
            }
        }
        if(cnt==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
