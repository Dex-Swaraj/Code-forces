#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'



int solve() {
    string s;
    cin >> s;
    
    if(s.length()==1)
       return 1;
    // Write your logic here
    for(int i=0;i<s.length()-1;++i)
    {
         if(s[i]==s[i+1])
             return 1;
            
    }
    return s.length();
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
          cout << solve() << endl;
    }

    return 0;
}