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

        ll a=0,b=0,c=0;

        vector<ll>v1(n),v2(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v1[i];
        }

        for(ll i=0; i<n; i++)
        {
            cin>>v2[i];

            if(v1[i]>v2[i])
                a+=v1[i];
            else if(v2[i]>v1[i])
                b+=v2[i];
            else if(v1[i]==1)
                c+=v1[i];
            else if(v1[i]==-1)
            {
                c++;
                a--;
                b--;
            }
        }

        cout<<min((a+c),min((b+c),(a+b+c)>>1))<<endl;
    }
}

