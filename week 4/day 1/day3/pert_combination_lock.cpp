#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES"
#define no cout<<"NO"

ll check_kth_bit_on_off(ll x,ll y)
{
    return (x >> y) & 1;
}

ll print_on_ans_off_bits(ll x)
{
    ll pos=-1;
    for(ll k = 31; k >= 0; k--)
    {
        if(check_kth_bit_on_off(x,k))
        {
            pos=k;
            break;
        }
    }
    return pos;
}

ll turn_on_kth_bit(ll x,ll k)
{
    return (x | (1 << k));
}

ll turn_off_kth_bit(ll x,ll k)
{
    return (x & (~(1 << k)));
}

ll toggle_kth_bit(ll x,ll k)
{
    return (x ^ (1 << k));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n;
    cin >> n;

    vector<ll> v(n), v1(n),v2(n);
    for(ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    bool ans=false;
    for(ll i=0; i<=((1<<n)-1); i++)
    {
        ll sum=0;
        for(ll j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                sum+=v[j];
            }
            else
            {
                sum-=v[j];
            }
        }
        if(sum%360==0){
            ans=true;
            break;
        }
    }

    if(ans)
        yes;
    else
        no;
    /*for(ll i=0; i<n; i++)
    {
    v2[i]=(1>>v1[i]);
    }
    /*for(ll i=0; i<n; i++)
    cout<<v2[i]<<" ";

    cout << endl;*/

}
