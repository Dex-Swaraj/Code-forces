#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        vector<int> b(k);

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ans += a[i];
        }

        for (int i = 0; i < k; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int r = n - 1;

        for (int i = 0; i < k; i++) {
            ans -= a[r];

            if (b[i] == 1)
                ans -= a[r];

            r--;
        }

        int l = 0;

        for (int i = k - 1; i >= 0; i--) {
            if (b[i] == 1)
                continue;

            ans -= a[l];
            l += b[i] - 1;
        }

        cout << ans << '\n';
    }
}