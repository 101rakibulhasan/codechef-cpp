#include<iostream>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int x,y; cin >> x >> y;
        cout << x+(x * 0.1) - (x - y) << endl;
    }
    return 0;
}
