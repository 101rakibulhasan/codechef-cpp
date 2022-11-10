#include<iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    while(x--)
    {
        int a;
        cin >> a;

        if(a < 300)
        {
            cout << 3000 <<endl;
        }else
        {
            cout << a * 10 << endl;
        }
    }
    return 0;
}
