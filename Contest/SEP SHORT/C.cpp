#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long int arr[n];
        for(int i=0; i < n; i++) cin >> arr[i];
        long long int sum = 0;
        for(int i=0; i < n; i++)
        {
            for(int j = i+1; j<n;j++)
            {
                sum += arr[i] * arr[j];
            }
        }
        cout << sum << endl;
    }
    return 0;
}
