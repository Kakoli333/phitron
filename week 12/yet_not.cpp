//**HARE KRUSHNA**//
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
    cin >> t;
    while (t--)
    {

        string s;
        cin>>s;

        string ans;
        ll a=0,b=0;

        for(ll i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='B')
            {
                b++;
            }
            else if(s[i]=='b')
            {
                a++;
            }
            else if(s[i]>90 && a>0)
            {
                a--;
            }
            else if(s[i]<=90 && b>0)
            {
                b--;
            }
            else
            {
                ans.push_back(s[i]);
            }

        }

        reverse(ans.begin(),ans.end());

        cout<<ans<<endl;

    }
}

/*
Input

4
0 1
12 4
57 37
316560849 14570961



1
8
4
33554432



*/





