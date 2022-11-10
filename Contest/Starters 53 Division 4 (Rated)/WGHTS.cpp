#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float a,b,c,d;
        cin >> a >> b >> c >> d;

        if(b + c == a)
        {
            cout << "YES\n";
        }else if(c == a)
        {
            cout << "YES\n";
        }
        else if(b == a)
        {
            cout << "YES\n";
        } else if(d == a)
        {
            cout << "YES\n";
        }
        else if(d + c == a)
        {
            cout << "YES\n";
        }else if(b + d == a)
        {
            cout << "YES\n";
        }else if(b + c + d == a)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
