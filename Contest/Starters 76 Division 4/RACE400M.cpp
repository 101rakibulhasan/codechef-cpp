#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double x , y,z;
        cin >> x >> y >> z;

        x= 400 / x;
        y= 400 / y;
        z= 400 / z;

        if(x > y && x > z)
        {
            cout << "ALICE\n";
        }else if(y> x && y> z)
        {
            cout << "BOB\n";
        }else
        {
            cout << "CHARLIE\n";
        }
    }
}
