#include <bits/stdc++.h>
using namespace std;

int minimumProtectedPositions(int n, int k, string &s) {
    int ans = 0;
    int prev = -1;

    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            if (prev == -1 || i - prev >= k) {
                ans++;
            }
            prev = i;
        }
    }

    return ans;
}

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    cout << minimumProtectedPositions(n, k, s) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}