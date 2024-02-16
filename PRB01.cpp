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
        int x; cin >> x;
        bool primeNumber = true;
        int flag = 0;
        if(x < 2) 
        {
            primeNumber = false;
            flag = 1;
        }
        if(x == 2 || x == 3 && flag == 0)
        {
            primeNumber = true;
            flag = 1;
        } 
        if(x % 2 == 0 && flag == 0) primeNumber = false;
        if(flag == 0){
            for(int i = 3; i*i <= x; i+=2)
            {
                if(x % i == 0) primeNumber = false;
            }
        }

        if(primeNumber){
            cout << "yes" << endl;
        } 
        else 
        {
            cout << "no" << endl;
        }
    }

    return 0;
}