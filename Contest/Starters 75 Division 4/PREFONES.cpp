#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int l; cin >> l;
        string s; cin >> s;

        int flag = 0,firstOnes=0,_bac=0, _max=0, f = 0;
        for(int i = 0; i < s.size(); i++)
        {
            f = 0;
            if(flag == 0 && s[i] == '1')
            {
                firstOnes++;
            }

            if(s[i] == '0')
            {
                flag = 1;
                if(s[i+1] == 0)
                {
                    continue;
                }else
                {
                    i++;
                    while(s[i] == '1')
                    {
                        f++;
                        i++;
                    }

                    if(_max < firstOnes+f)
                    {
                        _max = firstOnes + f;
                    }
                }
            }


        }

         cout << _max << endl;
    }

    return 0;
}
