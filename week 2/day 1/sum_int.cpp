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


   ll k,s;
   cin>>k>>s;
   ll cnt=0;
   ll i,j;
   for(i=0;i<=k;i++)
   {
       for(j=0;j<=k;j++)
       {
           ll l=s-i-j;
           if(0<=l && l<=k)
           {
                cnt++;
           }
       }
   }
   cout<<cnt;
}




