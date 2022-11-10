#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l,b;
        cin >> l >> b;

        int sum_l = 0;
        int sum_b = 0;
        int stat = 0;

        for(int i= 1; i <= 1000; i++)
        {

            if(i % 2 != 0)
            {
                sum_l = sum_l + i;
                if(sum_l > l)
                {
                   stat = 1;
                   break;
                }
            }else
            {
                sum_b = sum_b + i;
                if(sum_b > b)
                {
                   stat = 0;
                   break;
                }
            }
        }

        if(stat == 0)
            cout << "Limak" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
