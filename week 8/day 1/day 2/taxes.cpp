//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

bool is_Prime(ll n)
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n;
    cin>>n;

    if(is_Prime(n))
    {
        cout<<1;
    }
    else if(n%2==0)
    {
        cout<<2;
    }
    else
    {
        if(is_Prime(n-2))
            cout<<2;
        else
            cout<<3;
    }
}



