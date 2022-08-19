#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        string _str;

        cin >> n >> _str;

        int _count = 0;

        for(int i = 0; i < n; i++)
        {
            if(_str[i] == 'a' || _str[i] == 'e' || _str[i] == 'i' || _str[i] == 'o' ||  _str[i] == 'u')
            {
                _count = 0;
            }else
            {
                _count++;
            }

            if(_count == 4)
            {
                printf("NO\n");
                break;
            }

            if(i == n - 1 && _count < 4)
            {
                printf("YES\n");
            }
        }

    }

}
