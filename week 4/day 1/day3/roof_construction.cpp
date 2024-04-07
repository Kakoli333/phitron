#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES"
#define no cout<<"NO"

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

        ll pos;
       ll ans=n-1;
       while(ans>=0)
       {
           cout<<ans<<" ";
           if((ans^(ans-1))>(ans))
           {
                break;
            }
           ans--;
       }
        for(ll i=0;i<=ans-1;i++)
            cout<<i<<" ";
        cout<<endl;
    }
}
