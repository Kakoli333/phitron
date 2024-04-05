#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"


int32_t main()
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
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
            cin>>v[i];

        ll cnt=0;
        for (int i = 0; i <= n-k; i++)
        {

            for (int j = 0; j < k; j++)
            {
                // cout<<i<<" "<<j<<endl;
                if(v[i+j]%2==1)
                {
                    //cout<<v[i+j]<<" "<<endl;
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}








