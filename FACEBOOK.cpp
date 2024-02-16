#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr1[n+1], arr2[n+1];
        arr1[0] = -1;
        arr2[0] = -1;
        for(int i = 1; i <= n; i++) cin >> arr1[i];
        for(int i = 1; i <= n; i++) cin >> arr2[i];

        int high = 0;
        int high_ind = 0;

        for(int i = 1; i <= n; i++)
        {
            if(arr1[i] > high)
            {
                high = arr1[i];
                high_ind = i;
            }else if(arr1[i] == high)
            {
                if(arr2[i] > arr2[high_ind])
                {
                    high_ind = i;
                }
            }
        }

        cout << high_ind << endl;


    }
    return 0;
}
