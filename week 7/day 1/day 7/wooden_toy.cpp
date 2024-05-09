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
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());

        ll l=-1,r=1e9;

        while(r>l+1)
        {
            ll mid=(l+r)>>1;
            ll i=0,j=n-1;
            while(i+1<n && v[i+1]-v[0]<=2*mid)
            {
                i++;
            }
            while(j-1>=0 && v[n-1]-v[j-1]<=2*mid)
            {
                j--;
            }
            i++;
            j--;

            if(i>j || v[j]-v[i]<=2*mid)
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }

        cout<<r<<endl;

    }
}








