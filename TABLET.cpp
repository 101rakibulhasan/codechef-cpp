#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,b;
        cin >> n >> b;
        int low_p = 1000000,low_a = 0;
        while(n--)
        {
            int w,h,p,area;
            cin >> w >> h >> p;

            area = w * h;

            if(area > low_a && b >= p)
            {
                low_a = area;
                low_p = p;
            }
        }

        if(low_p <= b)
        {
            cout << low_a << endl;
        }else
        {
            cout << "no tablet" << endl;
        }
    }

    return 0;

}
