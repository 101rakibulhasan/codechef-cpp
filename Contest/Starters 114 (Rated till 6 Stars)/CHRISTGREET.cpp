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

    ll n; cin >> n;
    if(n == 25)
    {
        cout << "CHRISTMAS" << endl;
    }else
    {
        cout << "ORDINARY" << endl;
    }

    return 0;
}