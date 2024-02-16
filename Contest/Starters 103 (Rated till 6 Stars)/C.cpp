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
        ll alice[3];
        for(ll i = 0; i < 3; i++) cin >> alice[i];
        
        ll bob[3];
        for(ll i = 0; i <3; i++) cin >> bob[i];

        sort(alice, alice+3);
        sort(bob, bob+3);
        
        for(int i=2; i >=0; i--)
        {
            if(alice[i] > bob[i])
            {
                cout << "Alice" << endl;
                break;
            }else if(alice[i] < bob[i])
            {
                cout << "Bob" << endl;
                break;
            }else 
            {
                if(i==0)
                {
                    cout << "Tie" << endl;
                    break;
                }
            }
        }
        
    }

    return 0;
}