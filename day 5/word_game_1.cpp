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
        cin>>n;
        map<string, ll>mp;

        string s[3][n];
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }

        for(ll i=0; i<3; i++)
        {
            ll cnt=0;
            for(ll j=0; j<n; j++)
            {
                if(mp[s[i][j]]==1)
                    cnt+=3;
                else if(mp[s[i][j]]==2)
                    cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;

    }
}
