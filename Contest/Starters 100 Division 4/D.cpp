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
        string x; cin >> x;
        
        int one_ind = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if(x[i] == '1')
            {
                one_ind = i;
                break;
            }
        }

        if(one_ind <= x.size()-3)
        {
            for(int i=0; i <= one_ind; i++)
            {
                cout << x[i];
            }

            while(one_ind+1<x.size())
            {
                cout << 0;
                one_ind++;
            }

            cout << endl;

        }else
        {
            cout << x << endl;
        }
        

        
    }
    

    return 0;
}