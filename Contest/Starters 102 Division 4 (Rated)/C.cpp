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
        int n; cin >> n;
        int arr[n];
        for(int i=0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+n);
        int sum = 0;
        for(int i=1; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}