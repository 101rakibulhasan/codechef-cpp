#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    ll tc; cin >> tc;
    while(tc--)
    {
        ll n; cin >> n;
        string s; cin >> s;
        string _s = s;
        vector<pair<char,int>> vec;
        for(ll i=0; i < s.size(); i++)
        {
            vec.push_back({s[i], i});
        }

        sort(vec.begin(), vec.end(), [](const pair<char,int>& a, const pair<char,int>& b) {
            return a.first < b.first;
        });

        ll ignore_val = 0;
        ll ignore_ind = -1;
        ll dup_ind = -1;
        ll dup_char = 'a'-1;

        for(ll i=0; i < vec.size(); i++)
        {
            if(vec[i].second < i && dup_char < vec[i].first && ignore_val < i - vec[i].second)
            {
                ignore_val = i - vec[i].second;
                ignore_ind = vec[i].second;
                dup_char = vec[i].first;
            }
            
            if(vec[i].first == vec[i+1].first && dup_char < vec[i].first)
            {
                dup_ind = i;
                dup_char = vec[i].first;
            }
        }

        
        ll flag = -1;

        if(ignore_ind != -1)
        {
            flag = ignore_ind;
        }else

        {
            flag = dup_ind;
        }

        for(ll i=0; i < s.size(); i++)
        {
            if(i == flag)
            {
                continue;
            }

            cout << s[i];
        }


        cout << endl;
    }

    return 0;
}