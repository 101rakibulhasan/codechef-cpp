#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float a,b,c;
        cin >> a >> b >> c;

        if((a + b)/2 >c)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
