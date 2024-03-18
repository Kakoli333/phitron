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

    ll a,b,c;
    cin>>a>>b>>c;

    for(ll i=0;i<=c;i+=a)
    {
        for(ll j=0;j<=c;j+=b)
        {
            //cout<<i<<" "<<j<<endl;
            if(i+j==c)
            {
                cout<<"Yes";
                return 0;
            }
        }
    }
        cout<<"No";
}

