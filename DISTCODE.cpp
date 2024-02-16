#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int found=0;
        for(int i=0; i < s.size()-1; i++) //N
        {
            for(int j =i+2; j < s.size()-1; j++) //Y
            {
                if(s[j] == '0') continue; //false
                if(s[i] == s[j]) //I!=Y
                {
                    if(s[i+1] == s[j+1])
                    {
                        s[j] = '0';
                        s[j+1] = '0';
                    }
                }
            }

            //cout << s << endl;

        if(s[i] != '0')found++;
        }
        cout << found << endl;
    }
    return 0;
}
