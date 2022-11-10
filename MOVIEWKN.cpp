#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >> n;

        int mul[n],rat[n];
        int rat_i=0, mul_i=0;
        int ratt = 0, mull = 0;

        for(int i = 0; i < n; i++)
        {
            int l,r;
            cin >> l >>r;
            mul[i] = l * r;
            rat[i] = r;

            if(mul[i] > mull)
            {
                mull = mul[i];
                mul_i = i;
            }


            if(rat[i] > ratt)
            {
                ratt = rat[i];
                rat_i = i;
            }
        }

        cout << mul_i << rat_i <<endl;


    }

    return 0;
}
