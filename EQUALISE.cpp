#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int x, y;
        cin >> x >> y;

        if(x == y)
        {
            cout << "YES" <<"\n";
        }else if(x > y)
        {
            while(1)
            {
                y = y * 2;

                if(y == x)
                {
                    cout << "YES" <<"\n";
                    break;
                }else if(y > x)
                {
                    cout << "NO" <<"\n";
                    break;
                }
            }
        }else if(x < y)
        {
            while(1)
            {
                x = x * 2;

                if(y == x)
                {
                    cout << "YES" <<"\n";
                    break;
                }else if(x > y)
                {
                    cout << "NO" <<"\n";
                    break;
                }
            }
        }

    }

    return 0;
}
