//**HARE KRUSHN**//
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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        ll one=0,zero=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }

        for(auto i:s)
        {
            if(i=='1')
            {
                if(zero!=0)
                    zero--;
                else
                    break;
            }
            else if(i=='0')
            {
                if(one!=0)
                    one--;
                else
                    break;
            }
        }

        cout<<one+zero<<endl;
    }
}








