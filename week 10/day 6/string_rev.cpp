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


    ll n;
    cin>>n;
    string s;
    cin>>s;

    string s1=s;
    reverse(s1.begin(),s1.end());

    map<char,vector<ll>>pos_s,pos_s1;
    for(ll i=0; i<n; i++)
    {
        pos_s[s[i]].push_back(i);
        pos_s1[s1[i]].push_back(i);
    }

    vector<ll>per(n);
    for(char ch='a'; ch<='z'; ch++)
    {
        for(ll i=0; i<pos_s[ch].size(); i++)
        {
            per[pos_s1[ch][i]]=pos_s[ch][i];
        }
    }

    pbds<ll>p;
    ll ans=0;
    for(ll i=n-1; i>=0; i--)
    {
        ans+=p.order_of_key(per[i]);
        p.insert(per[i]);
    }

    cout<<ans<<endl;

}

//complexity=(logn)



