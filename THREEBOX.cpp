#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d, _count = 0;
        cin >> a >> b >> c >> d ;

        d = d - c - b - a;
        _count++;
        if(d < 0)
        {
            c = c+d;
            _count++;
            if(c < 0)
            {
            b = b+c;
            _count++;

            }if(b < 0)
            {
            a = a+b;
            _count++;

            }
        }

        cout << _count << endl;
    }
    return 0;
}
