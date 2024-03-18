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

    ll s,t;
    cin>>s>>t;
    ll cnt=0;
    for(ll a=0;a<=s;a++)
    {
        for(ll b=0;a+b<=s;b++)
        {
            for(ll c=0;a+b+c<=s;c++)
            {
                if(a*b*c<=t)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt;
}



