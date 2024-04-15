#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

ll check_kth_bit_on_off(ll x,ll y)
{
    return(x>>y)&1;
}

ll MSBpos(ll n)
{
    ll pos=0;
    while(n>1)
    {
        n=n>>1;
        pos++;
    }
    return pos;
}
void print_on_ans_off_bits(ll x)
{
    for(ll k=0; k<=31; k++)
    {
        if(check_kth_bit_on_off(x,k))
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    cout<<endl;

}

ll turn_on_kth_bit(ll x,ll k)
{
    return(x | (1>>k));
}

ll turn_off_kth_bit(ll x,ll k)
{
    return(x & (~(1<<k)));
}

ll toggle_kth_bit(ll x,ll k)
{
    return(x ^ (1<<k));
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        //cout<<(MSBpos(x))<<endl;
        ll msb=1<<(MSBpos(x));
        cout<<(msb^x)<<" "<<msb<<endl;
        //ll a=msb;
        //ll b=a^x;
        // cout<<a<<" "<<b<<endl;
    }
}
