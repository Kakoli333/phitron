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
        vector<ll>v(n),v1;
        priority_queue<ll>pq;
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll sum=0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]==0 && (!pq.empty()))
            {
                sum+=pq.top();
                pq.pop();
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout<<sum<<endl;
    }
}







