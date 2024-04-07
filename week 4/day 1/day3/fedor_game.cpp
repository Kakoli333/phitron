#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

ll print_on_ans_off_bits(ll x)
{
    ll cnt = 0;

    while (x > 0)
    {
        if ((x & 1) == 1)
            cnt++;
        x >>= 1;
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(m + 2);
    for(ll i = 1; i <= m + 1; i++)
    {
        cin >> v[i];
    }
    ll x = v[m + 1];

    vector<ll> ans(m + 1);
    for(ll i = 1; i <= m; i++)
    {
        ans[i] = print_on_ans_off_bits(x ^ v[i]);
    }

    sort(ans.begin(),ans.end());

    ll cnt=0;
    for(ll i=1;i<=m;i++)
    {
        if(ans[i]<=k)
            cnt++;
    }
    cout<<cnt;
   /* for(ll i = 1; i <= m; i++)
    {
        cout << ans[i] << " ";
    }
*/
}
