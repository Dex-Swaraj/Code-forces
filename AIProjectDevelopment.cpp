#include <bits/stdc++.h>
using namespace std;

long long solveWithoutAI(long long n, long long x, long long y) {
    long long count_hour=0;
    long long tot=x+y;
    return (n+tot-1)/tot;
}

long long solveWithAI(long long n, long long x, long long y, long long z) {
    long long count_hour=0;
    long long org_n=n;
    long long complete=x*z;
    n-=complete;

    if(n<=0)
        return (org_n+x-1)/x;
    
    int tot=(y*10)+x;
    return z+((n+tot-1)/tot);

}

void solve() {
    long long n, x, y, z;
    cin >> n >> x >> y >> z;

    long long withoutAI = solveWithoutAI(n, x, y);
    long long withAI = solveWithAI(n, x, y, z);

    cout << min(withoutAI, withAI) << '\n';
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