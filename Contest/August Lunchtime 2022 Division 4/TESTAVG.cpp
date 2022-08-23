#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
       int a,b,c;
        cin >> a >> b >>c;

        if((a+b)/2 < 35 || (c+b)/2 < 35 || (a+c)/2 < 35)
        {
            cout << "FAIL" <<endl;
        }else
        {
            cout << "PASS" <<endl;
        }
    }

    return 0;
}
