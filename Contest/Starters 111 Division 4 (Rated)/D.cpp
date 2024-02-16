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
        int n; cin >> n;
        string s; cin >> s;
        int freq['z'+1] = {0};
        ll num_mod = (n*(n+1)) % MOD;
        ll num = num_mod/2;
        for(ll i=0; i < s.size(); i++)
        {
            freq[s[i]]++;
        }
        cout << num << endl;
    }

    return 0;
}