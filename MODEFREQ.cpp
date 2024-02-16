#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int n,max=0; cin >> n;
        int arr[10001]= {0};
        while(n--)
        {
            int a; cin >> a;
            if(a > max) max = a;
            arr[a]++;
        }

        sort(arr,arr+max+1);

        int c=0;
        int max_count = 0;
        int max_ind = max;

        for(int i = max; arr[i] != 0; i--)
        {
            if(arr[i] == arr[i-1])
            {
                c++;
            }else
            {
                c++;
                if(max_count <= c)
                {
                    max_count = c;
                    max_ind = arr[i];
                }
                c = 0;
            }
        }

        cout << max_ind << endl;

    }
}
