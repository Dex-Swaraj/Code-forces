#include <bits/stdc++.h>
using namespace std;

vector<int> seq(vector<int> &arrs)
{
 int left=0;
 int right=arrs.size()-1;
 int count=0;
 vector<int> ans(right+1);
 while(left<=right)
 {
      ans[count++]=arrs[left];
      if(right!=left)
          ans[count++]=arrs[right];

      left++;
      right--;
 }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> b(n);

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> ans=seq(b);
        for(int x : ans)
        {
            cout << x << " ";
        }

        cout << "\n";
    }

    return 0;
}
