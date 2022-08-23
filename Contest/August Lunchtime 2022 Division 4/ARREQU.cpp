#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int a, real;
        cin >> a;
        int num[a];
        string sta = "Yes";
        for(int i = 0; i < a; i++)
        {
            cin >> num[i];
        }

        int  same=0;
        int n_same= 0;
        for(int i = 0; i < a-1; i++)
        {
            if(num[i] != num[i+1])
            {
                n_same++;
            }else
            {
                same++;
            }
        }

        if(same - n_same >= 0)
        {
            sta = "No";
        }

        cout << sta << endl;
        sta = "Yes";
    }
    return 0;
}
