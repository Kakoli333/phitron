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
       string a;
       cin>>a;
       for(int i=0;i<n;i++)
       {
           a[i]=tolower(a[i]);
       }
       string s1="";
       for(int i=0;i<n;i++)
       {
           if(a[i]!=a[i+1])
            s1=s1+a[i];
       }
       if(s1=="meow")
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
}
