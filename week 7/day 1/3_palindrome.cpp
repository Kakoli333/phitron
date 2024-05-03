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



    ll n;
    cin>>n;

    for(ll i=1; i<=n; i++)
    {
        if(i%4==1)
            cout<<'a';
        else if(i%4==2)
            cout<<'a';
        else if(i%4==3)
            cout<<'b';
        else if(i%4==0)
            cout<<'b';

    }

}





