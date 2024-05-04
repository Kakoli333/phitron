//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const ll mx=1e4;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    vector<ll>pw;
    for(ll i=1; i<=mx; i++)
    {
        pw.push_back(pow(i,3));
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;

        bool flag=false;
        for(ll i=0; i<mx; i++)
        {

            ll l=0,r=mx-1,mid;
            ll ans=x-pw[i];
            bool ok=false;

            while(l<=r)
            {
                mid=(l+r)/2;

                if(pw[mid]==ans)
                {
                    ok=true;
                    break;
                }
                else if(pw[mid]>ans)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }

            if(ok)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}






