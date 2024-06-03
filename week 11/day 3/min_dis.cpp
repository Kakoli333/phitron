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
        ll n,m, ans = 0;
        cin>>n>>m;
        vector<ll>a,b;
        for(ll i = 0; i<n; i++)
        {

            ll x;
            cin>>x;
            if(x > 0) a.push_back(x);
            if(x < 0) b.push_back(-x);
        }
        sort(a.begin(),a.end(),greater<ll>());
        sort(b.begin(),b.end(),greater<ll>());
        if(a.size() == 0)
        {
            if(b.size() != 0)
            {
                for(ll i = 0; i<b.size(); i+=m)
                {
                    ans += b[i]*2;
                }
                ans -= b[0];
            }
            cout<< ans <<endl;

        }
        else if(b.size() == 0)
        {
            if(a.size() != 0)
            {
                for(ll i = 0; i<a.size(); i+=m)
                {
                    ans += a[i]*2;
                }
                ans -= a[0];
            }
            cout<< ans <<endl;
        }
        else
        {
            for(ll i = 0; i<a.size(); i+=m)
                ans += a[i]*2;
            for(ll i = 0; i<b.size(); i+=m)
                ans += b[i]*2;
            ans -= max(a[0],b[0]);
            cout<< ans<<endl;
        }
    }
}

/*
Input

4
5 1
1 2 3 4 5
9 3
-5 -10 -15 6 5 8 3 7 4
5 3
2 2 3 3 3
4 2
1000000000 1000000000 1000000000 1000000000



25
41
7
3000000000


*/


