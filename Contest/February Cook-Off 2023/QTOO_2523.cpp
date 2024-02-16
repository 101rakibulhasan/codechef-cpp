#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n, _max=0;
        cin >> n;
        string s;
        cin >> s;
        for(int i = 0 ; i < n; i++)
        {
            for(int j = n - 1 ; j > i; j--)
            {
                if(s[i] == s[j])
                {
                    int a = n - 2;
                    if(a > _max) _max = a;
                }
            }
        }

        if(_max == 0)
        {
            cout <<  -1 << endl;
        }else cout << _max << endl;
    }
    return 0;
}
