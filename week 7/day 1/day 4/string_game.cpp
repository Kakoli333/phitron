//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const ll mx=1e4;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);



    vector<ll>pw;
    for(ll i=1; i<=mx; i++)
    {
        pw.push_back(pow(i,3));
    }
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll zero=0,one=0;

        for(ll i=0; i<n; i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }

        //cout<<one<<" "<<zero<<endl;
        ll mn=min(one,zero);

        if(mn%2==0)
            cout<<"Ramos\n";
        else
            cout<<"Zlatan\n";
    }
}







