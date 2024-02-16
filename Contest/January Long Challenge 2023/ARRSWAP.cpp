#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n],brr[n];
        for(int i = 0; i<n;i++)
        {
            cin >> arr[i];
        }

        for(int i = 0; i<n;i++)
        {
            cin >> brr[i];
        }

        sort(arr,arr+n);
        sort(brr,brr+n);

        if(abs(brr[n-2] - arr[n-1]) < abs(brr[1]-arr[0]))
        {
            cout << brr[n-2] - arr[n-1] << endl;
        }else
        {
            cout << brr[1]-arr[0] << endl;
        }

    }
    return 0;
}
