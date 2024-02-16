#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int a,_c = 0; cin >> a;
        while(a--)
        {
            int x; cin >> x;
            if(x >= 1000) _c++;
        }
        cout << _c << endl;
    }
    return 0;
}
