#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,x, c= 0;
         cin >> n >> x;
        while(n--)
        {
            int a; cin >> a;
            if(a >= x) c++;
        }
        cout << c << endl;
    }
    return 0;
}
