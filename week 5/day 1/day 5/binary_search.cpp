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

    ll n,k;
    cin>>n>>k;

    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }
    while(k--)
    {
        ll q;
        cin>>q;

        ll l=0,r=n-1,mid,idx=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(q==v[mid])
            {
                idx=mid;
                break;
                //r=mid-1;//first accuarance
                // l=mid+1;//last accuarance
            }
            else if(q<v[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

        //cout<<idx<<'\n';
        if(idx!=-1)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}


