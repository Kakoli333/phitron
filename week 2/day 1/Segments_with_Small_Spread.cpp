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


    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll sum=0,l=0,r=0,ans=0;
    multiset<ll>ml;
    while(r<n)
    {
        ml.insert(v[r]);
        ll mn,mx;
        mn=*ml.begin(),mx=*ml.rbegin();
        if((mx-mn)<=k)
        {
            ans+=r-l+1;
        }
        else
        {
            while(l<r)
            {
                mn=*ml.begin(),mx=*ml.rbegin();
                if((mx-mn)<=k)
                {
                    break;
                }
                auto it=ml.find(v[l]);
                ml.erase(it);
                l++;
            }
            mn=*ml.begin(),mx=*ml.rbegin();
            if((mx-mn)<=k)
            {
                ans+=r-l+1;
            }
        }
        r++;
    }
    cout<<ans;
    cout<<"\n";
}





