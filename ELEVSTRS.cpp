#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, v1,v2;
        cin >> n >> v1 >> v2;

        double t1 = (n * sqrt(2))/v1;
        double t2 = (n * 2.0) / v2;

        if(t1 > t2)
        {
            cout << "Elevator\n";
        }else
        {
            cout << "Stairs\n";
        }

    }
    return 0;
}
