//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll LCSubStr(string s, string t,ll n, ll m)
{
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 1, 0));
    int res = 0;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if (s[i - 1] == t[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > res)
                    res = dp[i][j];
            }
            else
                dp[i][j] = 0;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        ll s1=a.size(),s2=b.size();
        ll lcs_length = LCSubStr(a, b, s1, s2);
        cout<<s1 + s2 - 2 * lcs_length << '\n';
    }
}
