#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a,b,a1,b1,a2,b2;

        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if((b == a1 && a == b1) || ( a == a1  && b == b1))
        {
            cout << "1\n";
        }else if((b == a2 && a == b2) || ( a == a2  && b == b2))
        {
            cout << "2\n";
        }else{
            cout << "0\n";
        }

    }
}
