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
        int n,m; cin >> n >> m;
        string s; cin >> s;
        string k; cin >> k;

        int s_sub = 0;
        int diff = INT_MAX;

        for(int i = 0; i < n; i++)
        {
            int x = 0;
            for(int j = 0; j < m; j++)
            {
                x += min(abs(s[i+j]-k[j]), abs(s[i+j] - '0'-10)+k[j] - '0'); // 2 // 2
                cout << x << endl;
                
                //x += min(abs(n-t), abs(n-10)+t); // 2 // 2
            }

            diff = min(x, diff);
        }
        cout << diff << endl;
    }

    return 0;
}