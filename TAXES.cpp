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

        if(x > 100){
            cout << x - 10 << endl;
        }else{
            cout << x << endl;
        }


    }
    return 0;
}
