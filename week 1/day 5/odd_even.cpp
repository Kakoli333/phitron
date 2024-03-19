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

    ll n;
    cin>>n;
    vector<ll>v(n);
    ll sum=0;
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    if(sum%2==0)
        cout<<sum;
    else
    {
        for(ll i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                //cout<<v[i]<<endl;
                sum-=v[i];
                break;
            }
        }
        cout<<sum;
    }
}





