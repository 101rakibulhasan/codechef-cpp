#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, _czer = 0 , _cone = 0;
        cin >> n;
        string s;
        cin >> s;

        for(int i = 0 ; i <n; i++)
        {
            if(s[i] == '1')
            {
                _cone++;
            }else
            {
                _czer++;
            }
        }

        if(_czer == n)
        {
            cout << 0 << endl;
        }else if(_cone == n)
        {
            cout << 1 << endl;
        }else
        {
            if(_cone == 1)
            {
                cout << 1 << endl;
            }else if(_czer == 1)
            {
                cout << 2 << endl;
            }else
            {
                if(_cone > _czer)
                {
                    cout << 2 << endl;
                }else
                {
                    cout << 1 << endl;
                }
            }
        }
    }

    return 0;
}
