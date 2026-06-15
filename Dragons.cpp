#include<bits/stdc++.h>
using namespace std;


string function_to_win(int kiri,int no_of_drag)
{
    vector<pair<int,int>> dragon;
    dragon.reserve(no_of_drag);
    for(int i=1;i<=no_of_drag;++i)
    {
       int dragon_power;
       int new_exp;
       cin>>dragon_power>>new_exp;
       dragon.push_back({dragon_power,new_exp});


    }
    sort(dragon.begin(), dragon.end());
     for (const auto& p : dragon) {
        if(p.first>=kiri)
            return "NO";
        else
           kiri+=p.second;    
    }
     return "YES";
    
}

int main() {
    // Fast I/O lines we discussed for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int s, n;
    if (cin >> s >> n) {
        cout << function_to_win(s, n) << "\n";
    }
    return 0;
}