#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int ans=0;
         for(i=0;i<n;i++)
        {
            ans=max(ans,a[i]-a[0]);
            ans=max(ans,a[n-1]-a[i]);
            ans=max(ans,(a[i]-a[(i+1)%n]));
        }
        cout<<ans<<endl;
        /*sort(a,a+n);
         for(i=0;i<n;i++)
        {
            b[i]=a[i]-a[0];
        }
        sort(b,b+n);
        cout<<b[n-1]<<endl;*/

    }
}
