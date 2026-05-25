#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    string rotateString(string &s, int idx)
    {
        return s.substr(idx) + s.substr(0, idx);
    }

    int solve(int n, string &s)
    {
        int ans = INT_MIN;

        for(int i = 0; i < n; i++)
        {
            string temp = rotateString(s, i);

            int count = 1;

            for(int j = 1; j < n; j++)
            {
                if(temp[j] != temp[j - 1])
                {
                    count++;
                }
            }

            ans = max(ans, count);
        }

        return ans;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    Solution obj;

    while(t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        cout << obj.solve(n, s) << '\n';
    }

    return 0;
}