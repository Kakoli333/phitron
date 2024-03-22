    #include<bits/stdc++.h>
    using namespace std;
    #define int long long
    int32_t main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            string s;
            cin>>s;
            int cnt=0,cnt1=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='(')
                    cnt++;
                else if(cnt>0)
                    cnt--;
                else
                    cnt1++;
            }
            cout<<cnt<<endl;
        }
    }
