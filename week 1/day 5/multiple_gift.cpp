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

   ll x,y;
   cin>>x>>y;
   ll cnt=0;
   while(x<=y)
   {
       x=x*2;
       cnt++;
   }
   cout<<cnt;
}




