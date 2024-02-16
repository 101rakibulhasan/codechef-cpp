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
        string s; cin >> s;
        long long int ans=1;
        for(int i=0; i <n-2; i+=2)
        {
            long long int ct = 0;
            int x = s[i]-'0';
            int y = s[i+1]-'0';
            int z = s[i+2]-'0';

            // /cout <<s[i]<<s[i+1]<<s[i+2] << endl;

            if((ll)(x&y)==z)ct++;
	        if((ll)(x^y)==z)ct++;
	        if((ll)(x|y)==z)ct++;

            ans*=ct;
            ans%=1000000007;
        }
        cout << ans << endl;
    }

    return 0;
}