#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr[n];
        int infected[n] = {0};
        for(int i=0; i <n; i++) cin >> arr[i];
        int x=0;
        for(int i=0; i <n-1; i++)
        {
            if(abs(arr[i] - arr[i+1]) <= 2)
            {
                if(infected[x]==2)
                    infected[x]+=1;
                else
                    infected[x]+=2;
            }else{
                x++;
            }
        }

        sort(infected, infected+n);

        if(infected[n-2] == 0)
        {
            if(infected[n-1] == 0)
            {
                cout << 1 << " ";
            }else{
                cout  << infected[n-1] << " ";
            }
        }else{
            cout  << infected[n-2] << " ";
        }

        if(infected[n-1] == 0)
        {
            cout << 1 << " ";
        }else{
            cout  << infected[n-1] << " ";
        }

        cout << endl;


    }
    return 0;
}
