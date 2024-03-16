#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0 && n<10)
        cout<<0<<0<<0<<n;
    else if(n>=10 && n<100)
        cout<<0<<0<<n;
    else if(n>=100 && n<=999)
        cout<<0<<n;
    else
        cout<<n;
}
