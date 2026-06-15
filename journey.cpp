#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<long long> v = {a, b, c};
    long long sum=a+b+c;
    long long days=(n/sum)*3;
    long long rem=n%sum;
   
    if(rem==0)
        {
            cout<<days<<'\n';
        }
    else
    {
        int i=0;
        while(rem>0)
        {
            rem-=v[i];
            days++;
            i++;
        }
        cout<<days<<'\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}