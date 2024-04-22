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

    ll q;
    cin>>q;
    while(q--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;

        string ans;

        ll i=n-1;
        while(i>=0)
        {
            if(s[i]=='0')
            {
                ll s1=s[i-1]-'0';
                ll s2=s[i-2]-'0';
                char s3=st(s2*10+s1);
                ans+=s3;
                i-=3;
            }
            else
            {
                char s3=st(s[i]-'0');
                ans+=s3;
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
}

