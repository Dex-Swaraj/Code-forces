#include<bits/stdc++.h>
using namespace std;    

bool funcy(vector<int> vec)
{
    unordered_map<int,bool> mapping;
    mapping[vec[0]]=true;
    for(int i=1;i<vec.size();++i)
    {
        if((vec[i+1]<=vec.size() && mapping.find(vec[i]+1)==mapping.end()) && (vec[i-1]>0 && mapping.find(vec[i]-1)==mapping.end()) )
        {
               return false;
        }
        
        mapping[vec[i]]=true;
         
    }
    return true;
    
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

        vector<int> vec(n);

        for(int i = 0; i < n; ++i)
        {
            cin >> vec[i];
        }

        if(funcy(vec))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
