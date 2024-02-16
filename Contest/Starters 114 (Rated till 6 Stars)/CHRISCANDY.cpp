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
        vector<ll> s;
        for(ll i = 0; i < n ; i++)
        {
            ll x; cin >> x;
            s.push_back(x);
        }

        ll _count = 0;
        for(ll i = 0; i < n ; i++)
        {
            if(s[i] > s[i+1])
            {
                ll num = s[i];
                 while(num > s[i+1] && i+1 < n)
                {
                    i++;
                    _count++;
                }
            }
        }

        cout <<_count<< endl;
    }

    return 0;
}