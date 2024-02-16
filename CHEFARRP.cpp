#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = a[0];
        int mul = a[0];
        int cou = 0;

        for(int i = 1; i < n; i++)
        {
            sum = sum + a[i];
            mul = mul * a[i];

            if(sum == mul)
            {
                //cout << "SUM: " << sum << endl;
                cou++;
            }
        }
        sum = 0;
        mul = 1;

        for(int i = 0; i < n-1; i++)
        {
            sum = a[i] + a[i+1];
            mul = a[i] * a[i+1];
            if(sum == mul)
            {
                //cout << "SUM: " << sum << endl;
                cou++;
            }
        }

        cou = cou + n;

        cout << cou << endl;
    }

    return 0;
}
