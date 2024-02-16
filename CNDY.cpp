#include<iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,c=1;
        cin >> n;
        int l = 2 * n;
        int arr[l];
        int flag = 0;
        for (int i = 0; i < l;i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < l;i++)
        {
            for (int j = i+1; j < l;j++)
            {
                if(arr[i] == arr[j])
                {
                    c++;
                }
            }

            if(c > 2)
            {
                flag = 1;
                break;
            }else
            {
                c = 1;
            }

        }

        if(flag == 0)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
