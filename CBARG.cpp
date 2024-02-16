#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n; cin >> n;
        long long int arr[n];
        for(long long int i=0; i < n; i++) cin >> arr[i];
        long long int all=arr[0];
        for(int i=1; i < n; i++)
        {
            if(arr[i] - arr[i-1] > 0) all += arr[i] - arr[i-1];
        }

        cout << all <<endl;
    }
}
