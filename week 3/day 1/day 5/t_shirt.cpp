#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int d1=a.size();
        int d2=b.size();
        if(a==b)
            cout<<"="<<endl;

           else if(a[d1-1]=='S' && (b[d2-1]=='M' || b[d2-1]=='L'))
            cout<<"<"<<endl;
        else if(a[d1-1]=='M' && b[d2-1]=='S')
            cout<<">"<<endl;
        else if(a[d1-1]=='L' && b[d2-1]=='S')
            cout<<">"<<endl;
        else if(a[d1-1]=='M' && b[d2-1]=='L')
            cout<<"<"<<endl;
        else if(a[d1-1]=='L' && b[d2-1]=='M')
            cout<<">"<<endl;
            else if(a[d1-1]==b[d2-1] && d1!=d2)
            {
                if(d1>d2)
                {
                    if(a[d1-1]=='S')
                        cout<<"<"<<endl;
                    else if(a[d1-1]=='L')
                        cout<<">"<<endl;
                }
                else

                    if(a[d1-1]=='S')
                        cout<<">"<<endl;
                    else if(a[d1-1]=='L')
                        cout<<"<"<<endl;
                }
            }
    }
