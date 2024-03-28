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

    string s;
    ll k;
    cin>>s>>k;
    map<char,ll>mp;
    ll x=0,l=0,r=0,ans=0,n=s.size();
    while(r<n)
    {
        while(r<n)
        {
            if(mp[s[r]]==0)
                x++;
            mp[s[r]]++;
            if(x>k)
                break;
            r++;
        }
        if(x>=k)
            ans=max(ans,r-l);
        if(r==n)
            break;
        while(l<n)
        {
            if(mp[s[l]]==1)
                x--;
            mp[s[l]]--;
            if(x==k)
                break;
            l++;
        }
        l++;
        r++;
    }
     if(ans==0)
        cout<<-1;
     else
        cout<<ans;
}
