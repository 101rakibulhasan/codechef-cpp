#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int i = 1,sum = 0,_count=0;
        while(sum < n)
        {
            sum += i;
            if(sum > n)
            {
                break;
            }
            i++;
            _count++;

        }

        cout << _count << endl;
    }
    return 0;
}
