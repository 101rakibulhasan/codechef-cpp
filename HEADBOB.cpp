#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int d ; cin >> d;
        string s; cin >> s;

        int y = 0,n = 0,_i = 0;
        for(int i = 0; i < d; i++)
        {
            if(s[i] == 'N')
            {
                n++;
            }

            if(s[i] == 'Y')
            {
                y++;
            }

            if(s[i] == 'I')
            {
                _i++;
            }
        }

        if(_i > 0)
        {
            cout << "INDIAN\n";
        }else
        {
            ((y > 0 && n != 0) || (y > 0 && n == 0)) ? cout << "NOT INDIAN\n" : cout << "NOT SURE\n";
        }

    }
    return 0;
}
