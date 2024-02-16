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

    int n; cin >> n;
    if(n < 3)
    {
        cout << "GOLD" << endl;
    }else if(n >= 3 && n < 6)
    {
        cout << "SILVER" << endl;
    }else if(n >= 6)
    {
        cout << "BRONZE" << endl;
    }

    return 0;
}