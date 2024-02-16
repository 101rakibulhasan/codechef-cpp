#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,m,k;
        cin >> n >> m >> k;
        int arr[n+1] = {0};

        for(int i = 0; i < m ; i++)
        {
            int x; cin >> x;
            arr[x]++;
        }


        for(int i = 0; i < k ; i++)
        {
            int x; cin >> x;
            arr[x]++;
        }

        int d = 0;
        int mn = 0;

        for(int i = 1; i <= n ; i++)
        {
            if(arr[i] == 2) d++;
            if(arr[i] == 0) mn++;
        }

        cout << d << " " << mn << endl;


    }
    return 0;
}
