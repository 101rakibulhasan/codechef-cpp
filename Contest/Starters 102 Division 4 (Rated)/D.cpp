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
        int n,k; cin >> n>> k;
        vector<int> v;

        int div = k/2;
        if((k%2 == 1 && n%2 == 0) || (k%2 == 0 && n%2 == 1))
        {
            cout << -1 << endl;
        }else
        {
            for(int i = 0; i <div; i++)
            {
                k--;
                cout << "1 ";
            }

            for(int i = 0; i <div; i++)
            {
                cout << k/div << endl;
            }
        }

        cout << endl;
    }

    return 0;
}