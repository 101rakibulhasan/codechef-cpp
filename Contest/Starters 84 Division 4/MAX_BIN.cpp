
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;

        string s; cin >> s;

        if(s[0] == '0')
        {
            s[0] = '1';
            cout << s ;
            k--;
            while(k--)
            {
                cout << '0';
            }
            cout << endl;
        }else
        {
            cout << s;
            while(k--)
            {
                cout << '0';
            }
            cout << endl;
        }
    }
    return 0;
}

