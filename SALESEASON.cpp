#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        int t;
        cin >> t;

        if(t <= 100)
        {
            cout << t <<"\n";
        }else if(t > 100 && t <= 1000)
        {
            cout << t - 25 <<"\n";
        }
        else if(t > 1000 && t <= 5000)
        {
            cout << t - 100 <<"\n";
        }
        else if(t > 5000)
        {
            cout << t - 500 <<"\n";
        }
    }
    return 0;
}
