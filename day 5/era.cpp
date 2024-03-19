#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes count<<"Yes"
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
        ll n;
        cin>>n;
        vector<ll>v(n+1);
        for(ll i=1; i<=n; i++)
        {
            cin>>v[i];
        }
       /* for(ll i=1; i<=n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        ll cnt=0;
        ll sum=0;
        for(ll i=1; i<=n; i++)
        {
            if(v[i]>i)
            {
                //cout<<v[i]-i<<endl;
                sum=max(sum,v[i]-i);

                //cnt++;
            }
            else
                continue;
        }
        //cout<<sum<<" "<<cnt<<endl;
        cout<<sum<<endl;

    }
}







