//**HARE KRUSHN**//
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
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n%2==1)
        {
            for(ll i=1; i<=n; i++)
                cout<<i<<" ";
        }
        else
        {
            for(ll i=2; i<=2*n; i+=2)
                cout<<i<<" ";
        }
        cout<<'\n';
    }
}


