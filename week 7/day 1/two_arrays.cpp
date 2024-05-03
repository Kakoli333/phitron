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
        sort(a.begin(),a.end());

        for(ll i=0; i<n; i++)
        {
            cin>>b[i];
        }
        sort(b.begin(),b.end());

        ll mx=-1;
        for(ll i=0; i<n; i++)
        {
            mx=max(mx,b[i]-a[i]);
        }
        ll mn=0;
        for(ll i=0; i<n; i++)
        {
            mn=min(mn,b[i]-a[i]);
        }
        //cout<<mx<<" "<<mn<<endl;

        if((mx==1||mx==0)&&(mn==1 || mn==0))
            cout<<"YES";
        else
            cout<<"NO";
        cout<<'\n';
    }
}




