#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin>>n;
        n*=2;
        int arr[1440] = {0};
        while(n--)
        {
            int x;
            cin >> x;
            arr[x]++;
        }
        sort(arr,arr+1440);
        cout << arr[1439] << endl;
    }
    return 0;
}
