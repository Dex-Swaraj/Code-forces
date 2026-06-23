#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        set<long long> positions;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            positions.insert(x);
        }

        int k = positions.size();

        cout << k / 2 << '\n';
    }

    return 0;
}