    #include<bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            ll n;
            cin>>n;
            vector<ll>v;
            for(int i=0; i<n; i++)
            {
                ll x;
                cin>>x;
                v.push_back(x);
            }
            sort(v.begin(),v.end());
           ll cnt=1,i;
           for(i=0;i<n-1;++i)
           {
               if(v[i]!=v[i+1])
               {
                   cnt++;
               }
           }
          // cout<<cnt<<endl;
           if((v.size()-cnt)%2==0)
            cout<<cnt<<endl;
           else
            cout<<cnt-1<<endl;
        }
    }
