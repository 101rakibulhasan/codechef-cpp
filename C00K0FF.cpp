#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        bool cakewalk = false;
        bool simple = false;
        bool easy = false;
        bool ez_med = false;
        bool med_hard = false;

        int n;
        cin >> n;
        while(n--)
        {
            string s;
            cin >> s;

            if(s == "cakewalk" && cakewalk == false)
            {
                cakewalk = true;
            }

            if(s == "simple" && simple == false)
            {
                simple = true;
            }

            if(s == "easy" && easy == false)
            {
                easy = true;
            }

            if((s == "easy-medium" || s == "medium")&& ez_med == false)
            {
                ez_med = true;
            }

            if((s == "medium-hard" || s == "hard")&& med_hard == false)
            {
                med_hard = true;
            }

            if(n == 0)
            {
                if(easy == true && simple == true && cakewalk == true && ez_med == true && med_hard == true)
                {
                    cout << "Yes\n";
                    break;
                }else
                {
                    cout << "No\n";
                    break;
                }
            }


        }

    }
}
