//**HARE KRUSHNA**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool sorted(vector<ll>& v)
{
    for (ll i = 1; i < v.size(); i++)
    {
        if (v[i] < v[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin>>s;

        ll ans=n+1;
        for(ll i=0; i<26; i++)
        {
            ll l=0,r=n-1,cnt=0;

            while(l<=r)
            {
                if(s[l]==s[r])
                {
                    l++;
                    r--;
                }
                else if(s[l]==char('a'+i))
                {
                    cnt++;
                    l++;
                }
                else if(s[r]==char('a'+i))
                {
                    cnt++;
                    r--;
                }
                else
                {
                    cnt=n+1;
                    break;
                }
            }
            ans=min(ans,cnt);
        }

        if(ans==n+1)
            ans=-1;

        cout<<ans<<endl;
    }
}

/*
Input
5
8
abcaacab
6
xyzxyz
4
abba
8
rprarlap
10
khyyhhyhky


2
-1
0
3
2


*/

