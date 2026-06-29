#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int solve() {
    int n;
    cin >> n;

    vector<int> h(n);

    for (int i = 0; i < n; i++)
        cin >> h[i];

    int mx = LLONG_MIN;
    int mn = LLONG_MAX;

    for (int i = 0; i < n; i++) {
        if (h[i] > mx)
            mx = h[i];

        if (h[i] < mn)
            mn = h[i];
    }

    return mx - mn + 1;
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