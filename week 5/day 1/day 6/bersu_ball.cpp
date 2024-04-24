//Hare Krushn//

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


    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    ll m;
    cin>>m;
    vector<ll>b(m);
    for(ll i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(b.begin(),b.end());

    ll cnt=0;
    for(ll i=0; i<n; i++)
    {
        for(ll j=0; j<m; j++)
        {
            if(abs(a[i]-b[j])<2)
            {
                cnt++;
                b[j]=105;
                break;
            }
        }
    }
    cout<<cnt;
}



