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

    ll l,r;
    cin>>l>>r;

    ll a=(r-l+1)/2;
    cout<<"YES\n";

    for(ll i=0; i<a; i++)
        cout<<l+i*2<<" "<<l+i*2+1<<endl;;


}



