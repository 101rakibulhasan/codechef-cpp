#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n";

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int tc; cin >> tc;
    while(tc--)
    {
        int x,y; cin >> x >> y;
        if(x/y <=20)
        {
            cout << x/y << endl;
        }else
        {
            cout << 20 << endl;
        }
    }

    return 0;
}