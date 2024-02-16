#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        int sum = x + y + z;
        int flag = 0;
        for(int i = 1; i < sum ; i++)
        {
            for(int j = i+1; j < sum-i ; j++)
            {
                for(int k = j+1; k < sum-j ; k++)
                {
                    if((i != j && j != k && i != k) && i + j + k == sum)
                    {
                        flag = 1;
                        //cout << i << j << k << endl;
                        break;
                    }
                }
           }
        }

        if(flag == 0)
        {
            cout << "NO\n";
        }else
        {
            cout << "YES\n";
        }
    }
}
