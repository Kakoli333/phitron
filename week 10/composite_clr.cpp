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


    vector<ll>v1= {2,3,5,7,11,13,17,19,23,29,31};

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

        vector<ll>ans(n);
        for(ll i=0; i<n; i++)
        {
            ans[i]=-1;
        }

        ll cnt=1;

        for(auto x:v1)
        {
            bool flag=false;
            for(ll i=0; i<n; i++)
            {
                if(ans[i]!=-1)
                {
                    continue;
                }
                if(v[i]%x)
                {
                    continue;
                }

                flag=true;
                ans[i]=cnt;
            }

            if(flag)
                cnt++;
        }

        cout<<cnt-1<<'\n';

        for(ll i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

