#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes count<<"Yes"
#define no cout<<"No"

class Solution
{
public:
    int search(string pat, string txt)
    {
        int patLen = pat.size();
        int txtLen = txt.size();
        if (patLen > txtLen)
            return 0;

        map<char, int> x, y;
        int count = 0;

        for (char c : pat)
            x[c]++;

        for (int i = 0; i < txtLen; ++i)
        {
            char currentChar = txt[i];

            y[currentChar]++;

            if (i >= patLen)
            {
                char leftChar = txt[i - patLen];
                if (y[leftChar] == 1)
                   y.erase(leftChar);
                else
                   y[leftChar]--;
            }
            if (i >= patLen - 1 && y == x)
                count++;
        }

        return count;
    }
};

int32_t main()
{
    Solution obj;
    string pat, txt;
    cin >> txt >> pat;
    cout << obj.search(pat, txt) << endl;
    return 0;
}
