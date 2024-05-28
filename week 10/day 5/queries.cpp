//**HARE KRUSHNA**//
#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template<typename T> using pbds=tree<T,null_type,less_equal<T>,rb_tree_tag,
                           tree_order_statistics_node_update>;

//less->set
//less_equal->multiset

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n,m;
    cin>>n>>m;
    pbds<ll>p;
    for(ll i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        p.insert(x);
    }

    for(ll i=1; i<=m; i++)
    {
        ll x;
        cin>>x;

        cout<<p.order_of_key(x+1)<<" ";
    }
    cout<<endl;
}

//complexity=(logn)

