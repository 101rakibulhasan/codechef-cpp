#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
using ll = long long;

signed main()
{
    ll t; cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;

        if(n - m < 0){
           cout  << 0 << endl;
        }
        else cout << n - m << endl;
    }
    return 0;
}
