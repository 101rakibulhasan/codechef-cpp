#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b;
        cin >> a >> b;

        if(a < b)
        {
            int temp = a;
            a = b;
            b = temp;
        }

            if(a % b == 0)
            {
                cout << b << endl;
            }else
            {
                    cout << b/ (a % b) << endl;
            }
    }
    return 0;
}
