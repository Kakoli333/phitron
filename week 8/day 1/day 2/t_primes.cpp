//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool isPrime(ll n)
{
    if(n==1)
    {
        return false;
    }
    for(ll i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool isPerfect(ll n)
{
    ll x=sqrtl(n);
    return (x*x)==n;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];

    }

    for(ll i=0; i<n; i++)
    {
        if(isPrime(sqrtl(v[i])) && isPerfect(v[i]))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}

