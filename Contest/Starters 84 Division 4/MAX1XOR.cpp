#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long int n;char flag = '1'; cin >> n;
        string s; cin >> s;

        long long int c = 1;
        //c += n;

        for(int i = 0 ; i < n-1; i++)
        {
            if(s[i] == flag && flag == '1')
            {
                flag = '0';
                //c--;
            }else if(s[i] == flag && flag == '0')
            {
                flag = '0';
                //c--;
            }

            else
            {
                flag = '1';
                c++;
            }
        }


        cout << c << endl;
    }
    return 0;
}

