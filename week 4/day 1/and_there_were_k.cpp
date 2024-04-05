#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"Yes"
#define no cout<<"No"

ll check_kth_bit_on_off(ll x,ll y)
{
    return(x>>y)&1;
}
ll print_on_ans_off_bits(ll x)
{
    ll pos=-1;
    for(ll k=0; k<=31; k++)
    {
        if(check_kth_bit_on_off(x,k))
        {
            pos=k;
        }

    }
    return pos;

}
ll turn_on_kth_bit(ll x,ll k)
{
    return(x | (1>>k));
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
        ll n;
        cin>>n;

        ll x=print_on_ans_off_bits(n);
        cout<<(1<<x)-1<<endl;
    }
}








