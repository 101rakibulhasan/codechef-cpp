#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[100];
        for(int i = 1; i<= 100; i++)
        {
            arr[i] = 0;
        }

        int m,x,y;
        cin >> m >> x >> y;
        while(m--)
        {
            int j,l,r;
            cin >> j;

            l = j - (x*y);
            if(l < 1)
            {
                l = 1;
            }
            r = j + (x*y);
            if(r > 100)
            {
                r = 100;
            }

            for(int i = l; i<=r;i++)
            {
                arr[i] = 1;
            }
        }

        int _count = 0;
        for(int i = 1; i<= 100; i++)
        {
            if(arr[i] == 0) _count++;
        }

        cout <<  _count << endl;
    }
    return 0;
}
