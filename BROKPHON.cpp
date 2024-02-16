#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long int arr[n];
        long long int _traitor=0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(arr[i-1] != arr[i] && i-1 < n && i-1 >= 0)
            {
                _traitor++;
            }else if(arr[i+1] != arr[i] && i+1 < n && i+1 >= 0)
            {
                _traitor++;
            }
        }

        cout << _traitor << endl;
    }
}
