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
        ll i,a[n],sum=0;

        for(i=0; i<n; ++i)
        {
            cin>>a[i];
        }
        for(i=0; i<n; ++i)
        {
            sum=sum+abs(a[i]);
        }
        ll cnt = 0;
        for ( i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                i++;
                while (a[i] <= 0)
                {
                    i++;
                }
                cnt++;
            }
        }
        cout<<sum<<" "<<cnt<<endl;
    }
}

