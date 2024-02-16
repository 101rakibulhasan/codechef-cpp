#include <iostream>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        n++;
        int arr[n] = {0};
        for(int i = 1; i < n; i++)
        {
            cin >> arr[i];
        }

        int min = arr[1];
        int min_ind = 1;

        for(int i = 2; i < n; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
                min_ind = i;
            }
        }

        cout << min_ind << endl;
    }
    return 0;
}
