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

    string st;
    cin>>st;
    set<char> s;
    for(ll i = 0; i < st.size(); i++)
    {
        char name=st[i];
        s.insert(name);
    }

    //sort(s.begin(),s.end());
    string s1="abcdefghijklmnopqrstwxyz";

    char s2;
    bool flag=false;

    ll i=0;
    for(auto c:s1)
    {
       if(s.find(c)==s.end())
       {
           s2=c;
           flag=true;
           break;
       }
    }
    if(flag)
        cout<<s2;
    else
        cout<<"None";
}


