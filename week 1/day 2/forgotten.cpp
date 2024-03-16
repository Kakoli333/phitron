#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin>>n;
    int sum1=(n*(n+1))/2;
    int a[n],i,sum=0;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
     for(i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum1-sum;
}
