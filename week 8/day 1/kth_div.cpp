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



    ll n,k;
    cin>>n>>k;
    vector<ll>div;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            div.push_back(i);
            if((n/i)!=i)
                div.push_back(n/i);
            //cout<<i<<" "<<n/i<<" ";
        }
    }
    sort(div.begin(),div.end());

    if(div.size()>=k)
        cout<<div[k-1];
    else
        cout<<-1;

}














