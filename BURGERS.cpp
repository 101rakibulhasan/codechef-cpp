#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
using ll = long long;

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    ll t; cin >> t;
    while(t--){
        ll x,y;
        cin >> x >> y;
        if(x <= y)
        {
            cout << x << endl;
        }else{
            cout << y << endl;
        }
    }

    return 0;
}
