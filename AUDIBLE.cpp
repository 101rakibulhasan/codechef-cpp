#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
using ll = long long;

signed main()
{
    ll t; cin >> t;
    while(t--){
        ll x;
        cin >> x;

        if(x >= 67 && x <=45000){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
