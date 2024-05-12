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

    ll x,y;
    cin>>x>>y;

    ll mn=min(x,y);

    if((y*(log(x)))>(x*(log(y))))
    {
        cout<<">";
    }
    else if((y*(log(x)))<(x*(log(y))))
    {
        cout<<"<";
    }
    else
    {
        cout<<"=";
    }
}

