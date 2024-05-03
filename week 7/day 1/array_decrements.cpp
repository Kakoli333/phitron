//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"


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

        vector<ll>a(n),b(n);
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll mx=0;
        for(ll i=0; i<n; i++)
        {
            mx=max(mx,a[i]-b[i]);
        }
        //cout<<mx<<endl;

        vector<ll>ans(n);
        for(ll i=0; i<n; i++)
        {
            if((a[i]-mx)<0)
                ans[i]=0;
            else
                ans[i]=a[i]-mx;
        }

        bool flag=true;

        for(ll i=0; i<n; i++)
        {
            if(ans[i]!=b[i])
            {
                flag=false;
                break;
            }
        }

        if(!flag)
            cout<<"NO";
        else
            cout<<"YES";
        cout<<'\n';
    }
}



