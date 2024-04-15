//Hare Krishna//

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

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
        string s;
        cin>>s;

        string ans="";
        ll x=0,y=0,l=0,r=n-1;

        while(l<r)
        {
            if(s[l]==s[r])
            {
                x+=2;
            }
            else
            {
                y++;
            }
            l++;
            r--;
        }

        for(ll i=0; i<=n; i++)
        {
            ll total=i;
            total-=y;

            if(total<0)
            {
                ans.push_back('0');
                continue;
            }
            total=max((total%2),total-x);
            total=max(0ll,total-(n%2));

            if(total==0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
        }

        cout<<ans<<'\n';
    }
}




