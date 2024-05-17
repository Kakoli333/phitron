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
        ll a,b;
        cin>>a>>b;

        if(b==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<a<<" "<<a*b<<" "<<a+(a*b)<<endl;
        }
    }

}





