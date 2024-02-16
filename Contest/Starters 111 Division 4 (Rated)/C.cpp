#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

#define endl "\n"
#define all(x) (x).begin(), (x).end()

const ld pi = acos(-1);
const ll MOD = 1000000007;
const ll N = 1e5+7;

int isvowel(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return 1;
    }else
    {
        return 0;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(nullptr);

    ll tc; cin >> tc;
    while(tc--)
    {
        string s; cin >> s;
        int flag = 0;
        for(ll i = 0; i < s.size(); i++)
        {
            if(i == s.size()-1)
            {
                if(isvowel(s[i]) == 1)
                {
                    flag = 1;
                    //cout << "1" << endl;
                }
            }else
            {
                if(i % 2 == 0 && isvowel(s[i]) == 1)
                {
                    flag = 1;
                    //cout << "2" << endl;
                }else if(i % 2 == 1 && isvowel(s[i]) == 0)
                {
                    flag = 1;
                    //cout << "3" << endl;
                }
            }
        }

        if(flag == 0)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}