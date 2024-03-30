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
        ll n,m;
        cin>>n>>m;
        ll a[n][m];
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        ll sum=0,mx=0;
        for(ll i=0; i<n; i++)
        {
            for(ll j=0; j<m; j++)
            {
                sum=a[i][j];
                ll row=i+1,col=j+1;
                while(row<n && col<m)
                {
                    sum+=a[row++][col++];
                }
                row=i-1,col=j+1;
                while(row>-1 && col<m)
                {
                    sum+=a[row--][col++];
                }
                row=i-1,col=j-1;
                while(row>-1 && col>-1)
                {
                    sum+=a[row--][col--];
                }
                row=i+1,col=j-1;
                while(row<n && col>-1)
                {
                    sum+=a[row++][col--];
                }
                mx=max(sum,mx);
            }
        }
        cout<<mx<<'\n';
    }
}



