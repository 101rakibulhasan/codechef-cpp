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
        double l , t,h;
        cin >> l >> t >> h;

        double ht = (ceil) ((double)l/h);
        double tt = (ceil) ((double)l/t);

        if(ht < tt)
        {
            cout << tt - ht - 1 << endl;
        }else if(ht == tt)
        {
            cout << -1 << endl;
        }

        //cout << ht << " " << tt << endl;

    }

    return 0;
}