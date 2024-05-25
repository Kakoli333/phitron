
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
        cin >> n;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        ll cnt=0,cnt1=0;
        ll x;

        for(ll i=1; i<n; i++)
        {
            if(v[i]%v[0]!=0)
            {
                x=v[i];
                break;
            }
        }
        for(ll i=1; i<n; i++)
        {
            if(v[i]%v[0]==0)
            {
                cnt++;
            }
            else if(v[i]%x==0)
            {
                cnt1++;
            }
        }

        if(cnt+cnt1==n-1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}

/*
Input

4
3
7 3 8
5
7 1 9 3 5
5
4 12 2 6 3
5
7 49 9 3 1000000000


No
Yes
Yes
No

*/
