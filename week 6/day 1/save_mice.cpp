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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(k);
        for(ll i=0; i<k; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());

        ll cnt=0,sum=0;
        for(ll i=0; i<k; i++)
        {
            if(sum>=v[i])
            {
                break;
            }
            sum+=n-v[i];
            cnt++;
        }

        cout<<cnt<<endl;

    }
}
