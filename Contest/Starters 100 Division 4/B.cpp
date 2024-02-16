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
        int a,b,x,y; cin >> a >> b >> x >> y;
        int sur = (a-b) + (x-y);
        if(sur< 0)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}