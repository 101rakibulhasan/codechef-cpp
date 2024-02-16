#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,y;
        cin >> x >> y;

        int flag = 0;
        if(x == y || x > y)
        {
            flag = 1;
        }

        (flag == 1) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
