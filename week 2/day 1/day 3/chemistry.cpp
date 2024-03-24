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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll a[26]= {0};
        for(ll i=0; i<n; i++)
        {
            a[s[i]-'a']++;
        }
        ll odd=0,even=0;
        for(ll i=0; i<26; i++)
        {
            if(a[i]!=0)
                //cout<<a[i]<<" ";
            {
                if(a[i]%2!=0)
                    odd++;
                else
                    even++;
            }
        }
        //cout<<odd<<" "<<even;
        if(odd<=k+1)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';

        }
    }

}

















