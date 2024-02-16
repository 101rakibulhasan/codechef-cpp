#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, s=0,l=0; cin >> n;
        while(n--)
        {
            string st;
            cin >> st;
            if(st == "START38")
            {
                s++;
            }else{
                l++;
            }
        }

        cout << s << " " << l << endl;
    }
    return 0;
}
