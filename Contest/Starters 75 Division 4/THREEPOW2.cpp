#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        long long l,num=0,c = 0;
        cin >> l;
        string s;
        cin  >> s;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                c++;
            }
        }

        if(s == "10" || s == "1") cout << "NO\n";
        else if(c > 3) cout << "NO\n";
        else  cout << "YES\n";

    }

    return 0;
}
