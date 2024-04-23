//** HARE KRUSHN**//
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

ll subset(ll n)
{
    for(ll i=0; i<(1<<n); i++)
    {
        for(ll k=0; k<n; k++)
        {
            if((i>>k)&1)
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
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        //subset(v[i]);
    }

    ll ans=0;
    for(ll i=0; i<(1<<n); i++)
    {
        ll mn=INT_MAX,mx=INT_MIN,cnt=0,sum=0;
        for(ll j=0; j<n; j++)
        {
            if((i&(1<<j))!=0)
            {
                cnt++;
                sum+=v[j];
                mn=min(mn,v[j]);
                mx=max(mx,v[j]);
            }
        }

        if(mx-mn>=x && sum>=l && sum<=r && cnt>=2)
            ans++;
    }

    cout<<ans;
}







