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


    string s1,s2;
    cin>>s1>>s2;
    ll cnt=0;
    for(ll i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
            cnt++;
    }
    cout<<cnt;
}






