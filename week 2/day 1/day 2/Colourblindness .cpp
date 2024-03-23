#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"
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
        string s1,s2;
        cin>>s1>>s2;
        ll cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(s1[i]==s2[i] || (s1[i]=='G'&&s2[i]=='B') || (s1[i]=='B'&&s2[i]=='G'))
                cnt++;

        }
        //cout<<cnt<<endl;
        if(cnt==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}









