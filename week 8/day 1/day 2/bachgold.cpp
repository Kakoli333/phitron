#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int k;
    cin>>k;

    cout<<k/2<<endl;
    if(k%2==0)
    {
         for(int i=0;i<(k/2);i++)
        cout<<2<<" ";
    }
    else
    {

        cout<<3<<" ";
         for(int i=0;i<(k/2)-1;i++)
         {
             cout<<2<<" ";
         }

    }
}
