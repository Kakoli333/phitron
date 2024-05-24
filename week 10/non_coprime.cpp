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
        ll l,r;
        cin>>l>>r;

        bool flag=false;
        for(ll i=l; i<=r; i++)
        {
            for(ll j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    cout<<j<<" "<<i-j<<endl;
                    flag=true;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(!flag)
            cout<<-1<<endl;
    }
}


