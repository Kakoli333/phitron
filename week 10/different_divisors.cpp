//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

vector<ll>primes(ll n)
{
    vector<bool>prime(n+1,true);
    for(ll i=2; i*i<=n; i++)
    {
        if(prime[i])
        {
            // cout<<i<<"->"<<n/i<<endl;1
            for(ll j=i+i; j<=n; j+=i)
            {
                prime[j]=false;
            }
        }
    }

    vector<ll>ans;
    for(ll i=2; i<=n; i++)
    {
        if(prime[i])
        {
            ans.push_back(i);
        }
    }

    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    const ll x=100000;
    vector<ll>v=primes(x);


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;


        ll p=*lower_bound(v.begin(),v.end(),1+n);
        ll q=*lower_bound(v.begin(),v.end(),p+n);

        cout<<p*q<<'\n';
    }
}


