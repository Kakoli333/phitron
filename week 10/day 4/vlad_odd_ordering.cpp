//**HARE KRUSHNA**//
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
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;

        for(ll i=1; i<=(log2(n)+1); i++)
        {
            ll x=pow(2,i),y=(n+(x/2))/x;

            if(k<=y)
            {
                if(k==1)
                {
                    cout<<(x/2)<<endl;
                    break;
                }
                else
                {
                    ll ans=(x/2)+((k-1)*x);
                    cout<<ans<<endl;
                    break;
                }
            }
            else
            {
                k-=y;
            }
        }
    }
}

/*
Input

4
3
7 3 8
5
7 1 9 3 5
5
4 12 2 6 3
5
7 49 9 3 1000000000


No
Yes
Yes
No

*/

