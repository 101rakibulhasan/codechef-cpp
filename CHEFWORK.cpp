#include<bits/stdc++.h>

using namespace std;

int main()
{

        int n;
        cin >> n;
        int work[n], coin[n];
        int c_tra=100000, c_aut=100000, c_aut_tra = 100000;

        for(int i = 0; i < n; i++)
        {
            cin >> coin[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> work[i];
        }

        for(int i = 0; i < n; i++)
        {
            if(work[i] == 1)
            {
                if(c_aut > coin[i])
                {
                    c_aut = coin[i];
                }
            }else if(work[i] == 2)
            {
                if(c_tra > coin[i])
                {
                    c_tra = coin[i];
                }
            }else if(work[i] == 3)
            {
                if(c_aut_tra > coin[i])
                {
                    c_aut_tra = coin[i];
                }
            }
        }

        if(c_aut_tra < c_aut + c_tra)
        {
            cout << c_aut_tra <<endl;
        }else{
            cout << c_aut + c_tra <<endl;
        }
}
