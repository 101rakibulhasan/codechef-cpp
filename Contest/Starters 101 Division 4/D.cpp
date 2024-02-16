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
        int n,h; cin >> n >> h;
        
        int arr[n];
        int total_eh = 0;
        for(int i=0; i < n; i++)
        {
            cin >> arr[i];
            total_eh += arr[i];
        }

        sort(arr, arr+n);

        if(total_eh < h)
        {
            cout << 0 << endl;
        }else
        {
            for(int i = n-1; i >= 0; i--)
            {
                h -= arr[i];
                if(h <= 0)
                {
                    cout << arr[i] << endl;
                    break;
                }
            }
        }

        
    }

    return 0;
}