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
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }

        map<ll,ll>cnt;
        for(ll i=0; i<n; i++)
        {
            for(ll j=2; j*j<=v[i]; j++)
            {
                if(v[i]%j==0)
                {
                    while(v[i]%j==0)
                    {
                        cnt[j]++;
                        v[i]/=j;
                    }
                }
            }


            if(v[i]>1)
            {
                cnt[v[i]]++;
            }
        }
        bool ans=true;
        for(auto [x,y]:cnt)
        {
            if(y%n!=0)
            {
                ans=false;
                break;
            }
        }

        if(ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}


