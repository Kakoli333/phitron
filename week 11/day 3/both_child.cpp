//**HARE KRUSHNA**//
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
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll ans = 0;
        vector<ll>v(n),mp(n+1);

        for(ll i = 0; i<n; i++)
        {
            cin>>v[i];
            if(v[i] >n) continue;
            mp[v[i]]++;
        }
        for(ll i = 1; i<=n; i++)
        {
            ll cnt = 0;
            for(ll j = 1; j*j <= i; j++)
            {
                if(i%j == 0)
                {
                    cnt += mp[j];
                    if(j*j != i)
                        cnt += mp[i/j];
                }
            }
            ans = max(ans,cnt);
        }
        cout<< ans<<endl;
    }
}

/*
Input

7
5
1 2 3 4 5
3
2 2 2
6
3 1 3 4 9 10
9
1 3 2 4 2 3 7 8 5
1
10
8
7 11 6 8 12 4 4 8
10
9 11 9 12 1 7 2 5 8 10



3
3
3
5
0
4
4



*/



