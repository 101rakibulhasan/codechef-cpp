#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        double x = pow(0.143*n,n);

        if(x - floor(x) < 0.5)
        {
            cout << (int) floor(x) << endl;
        }else
        {
            cout << (int) floor(x) + 1<< endl;
        }
    }
    return 0;
}
