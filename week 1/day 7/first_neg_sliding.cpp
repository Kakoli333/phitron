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
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll k;
    cin>>k;

    ll l=0,r=0;
    vector<ll>v1;
    queue<ll>q;
    while(l<n)
    {
        if(v[l]<0)
        {
            q.push(v[l]);
        }
        if(l-r+1==k)
        {
            if(q.size()==0)
            {
                v1.push_back(0);
            }
            else
            {
                v1.push_back(q.front());
            }
            if(v[r]<0 && !q.empty())
            {
                q.pop();
            }

            r++;
        }
        l++;
    }

    for(auto &i:v1)
        cout<<i<<" ";
}


