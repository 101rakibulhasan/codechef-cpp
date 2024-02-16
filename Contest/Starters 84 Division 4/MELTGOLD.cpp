
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,y, c= 0, i = 1;
        cin >> x >> y;
        while(x > y)
        {
            y += i;
            c++;
            i++;
        }
        cout << c << endl;
    }
    return 0;
}
