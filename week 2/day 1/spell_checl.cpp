#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       string s1;
       cin>>s1;
       string s2="Timur";
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       if(n==5 && s1==s2)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
    }
}
