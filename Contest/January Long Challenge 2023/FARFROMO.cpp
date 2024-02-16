#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c, d;
        cin >> a >> b >> c >> d;

        if(sqrt(a*a+b*b) < sqrt(c*c + d*d))
        {
            cout << "BOB\n";
        }else if(sqrt(a*a+b*b) == sqrt(c*c + d*d))
        {
            cout << "EQUAL\n";
        }else
        {
            cout << "ALEX\n";
        }

    }
return 0;
}
