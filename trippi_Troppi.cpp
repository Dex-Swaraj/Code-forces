#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

string solve() {
    string n;
    getline(cin, n);

    int size=n.size();
    char index;
    string ans;
    ans+=n[0];
    for(int i=0;i<size-1;++i)
    {
         if(n[i]==' ')
         {
             index=n[i+1];
             ans+=index;
         }
    }
    return ans;

}

int main() {
    fastio();

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
       cout << solve() << '\n';
    }

    return 0;
}