#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int a,b,c,n;
        cin >> a >> b >> c >> n;

        if(a + b >= n || b + c >= n || a + c >= n )
        {
            cout << "YES\n";
        }else cout << "NO\n";
    }
    return 0;
}
