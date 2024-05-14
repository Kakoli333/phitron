//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

ll lcm(ll a,ll b)
{
    return ((a*b)/(__gcd(a,b)));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);




    ll n;
    cin>>n;

    if(n==1)
        cout<<1<<" "<<1;
    else
    {
        ll a,b;
        for(ll i=1; i<sqrt(n); i++)
        {
            if(n%i==0)
            {
                if(lcm(i,n/i)==n)
                {
                    a=i,b=n/i;
                }
            }
        }
        cout<<a<<" "<<b;
    }
}
















