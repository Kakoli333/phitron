//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool divisor(ll a,ll b)
{
    while(1)
    {
        if(__gcd(a,b)==1)
            break;
        b/=__gcd(a,b);
    }

    if(b==1)
        return true;
    return false;
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
        ll a,b;
        cin>>a>>b;

        if(divisor(a,b))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}









