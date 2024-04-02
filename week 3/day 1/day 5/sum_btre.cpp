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
        ll sum=0;
        while(n!=0)
        {
            sum=sum+n;
            n=n/2;
        }
        cout<<sum<<endl;
    }
}
