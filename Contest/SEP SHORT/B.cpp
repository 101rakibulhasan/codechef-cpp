#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,h; cin >> x >> h;
        double half = x/2.0;

        int _count = 5 ;
        while(half * _count> h) _count--;
        h -= half * _count;

        if(h != 0)
        {
            if(h <= x) _count++;
            else
            {
                _count += h/x;
                if(h%x > 0) _count++;
            }
        }


        cout << _count << endl;

    }
    return 0;
}
