#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,y,sum = 0;
        cin >> x >> y;
        sum = x + y;
        if(sum > 6)
            cout << "YES" <<  endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
