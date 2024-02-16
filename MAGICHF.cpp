#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,x,s;
        cin >> n >> x >> s;

        int hold = x;
        while(s--)
        {
            int a , b;
            cin >> a >> b;

            if(a == hold)
            {
               hold = b;
               b = a;
               //continue;
            }

            if(b == hold)
            {
                hold = a;
                a = b;
                //continue;
            }

            //cout << hold << endl;
        }

        cout << hold << endl;
    }
    return 0;
}
