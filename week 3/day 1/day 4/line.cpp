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
        string s;
        cin>>s;
        ll sum=0;
        ll l,r;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                l=i;
                sum+=i-0;
            }
            else
            {
                r=i;
                sum+=(n-1-i);
            }
        }
        //cout<<sum<<endl;
        vector<ll>v;
        ll s1,s2;
        for(ll i=0; i<n; i++)
        {
            if(s[i]=='L')
            {
                s1=i;
                s2=n-i-1;
                if(s2>s1)
                {
                    v.push_back(s2-s1);
                }
            }
            if(s[i]=='R')
            {
                s1=i;
                s2=n-i-1;
                if(s1>s2)
                {
                    v.push_back(s1-s2);
                }
            }
        }
        /*cout<<v.size()<<endl;
        for(ll i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
        cout<<endl;*/
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        ll x=v.size();
        v.resize(n,0);
        vector<ll>ans(n);
        for(ll i=0;i<n;i++)
        {
            ans[i]=sum+v[i];
            sum=ans[i];
        }
        for(ll i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
}







