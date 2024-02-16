#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        double s,a,b,c;
        cin >> s >> a >> b >> c;

        s = s + (s * c / 100);

        if(s >= a && s <= b)
        {
            cout << "Yes\n";
        }else
        {
            cout << "No\n";
        }

    }
    return 0;
}
