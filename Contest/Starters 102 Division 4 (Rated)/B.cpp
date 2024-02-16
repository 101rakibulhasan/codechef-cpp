#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    int tc; cin >> tc;
    while(tc--)
    {
        double x; cin >> x;
        double v = x * 20.0/100.0;
        double sum = 100/v;
        
        cout << ceil(sum) << endl;
    }

    return 0;
}