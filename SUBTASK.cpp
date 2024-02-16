#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,k; cin >> n >> m >> k;
        int arr[n];
        int count1 = 0;
        int count1tillm = 0;
        for(int i=0; i < n; i++) {
            cin >> arr[i];
            count1 += arr[i];

            if(i < m)
            {
                count1tillm += arr[i];
            }
        }
        if(n == count1)
        {
            cout << 100 << endl;
        }else if(m == count1tillm)
        {
            cout << k << endl;
        }else
        {
            cout << 0 << endl;
        }
    }
}
