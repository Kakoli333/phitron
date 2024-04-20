//**HARE KRUSHN**//
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes count<<"Yes"
#define no cout<<"No"

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
        vector<ll>v(n);
        for(ll i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<ll>neg,pos;
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]<=0)
            {
                cnt++;
                neg.push_back(v[i]);
            }
            else
            {
                pos.push_back(v[i]);
            }
        }

        ll sum1=0;
        for(ll i=0; i<n; i++)
        {
            sum1+=abs(v[i]);
        }

        //cout<<cnt<<endl;

        if(cnt%2==0)
            cout<<sum1<<'\n';
        else
        {
            ll mn = LLONG_MAX;
            if (!pos.empty())
                mn = min(mn, pos[0]);
            if (!neg.empty())
                mn = min(mn, abs(neg[neg.size() - 1]));

            cout << sum1 - 2 * mn << '\n';
        }

        /* for(ll i=0; i<neg.size(); i++)
         {
             cout<<neg[i]<<" ";
         }
         cout<<endl;
         for(ll i=0; i<pos.size(); i++)
         {
             cout<<pos[i]<<" ";
         }
         cout<<endl;*/
        //cout<<cnt<<endl;
    }
}
