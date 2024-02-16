#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int all1=0;
        int all0=0;
        for(int i=0; i < s.size(); i++)
        {
            if(s[i] == '0') all0++;
            else all1++;
        }

        if(all1 == s.size()-1 || all0 == s.size()-1)
        {
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    }
    return 0;
}
