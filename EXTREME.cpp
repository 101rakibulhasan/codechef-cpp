#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;

        int ar[x];
        for(int i=0;i < x;i++) cin>> ar[i];

        int _count = 0;

        if(ar[x-1] < ar[0])
        {
            _count++;
            cout << "up\n";
        }
        for(int i=0;i < x;i++)
        {
            if(ar[x-i-1] < ar[x-i-2])
            {
                _count++;
                cout << "down\n";
            }else
            {
                break;
            }
        }

        cout << _count <<endl;
    }
    return 0;
}
