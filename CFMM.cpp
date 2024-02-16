#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int arr['z'+1] = {0};
        while(n--)
        {
            string s; cin >> s;
            for(int i = 0; i < s.size(); i++){
                arr[s[i]]++;
            }
        }

        int x = min(arr['c']/2, min(arr['o'], min(arr['d'], min(arr['e']/2, min(arr['h'], arr['f'])))));
        cout << x << endl;
    }
}
