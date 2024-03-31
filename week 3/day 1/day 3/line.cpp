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
        string s;
        cin>>s;
        ll sum=0;
        ll l,r;
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='L')
            {
                l=i;
                sum+=i-0;
            }
            else
            {
                r=i;
                sum+=(n-1-i);
            }
        }
        //cout<<sum<<endl;
    }
}







