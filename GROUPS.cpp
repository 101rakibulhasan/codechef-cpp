#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;

    while(n--)
    {
        string s;
        cin >> s;

        int _count = 0;
        int flag = 0;

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '1')
            {
                if(flag == 0){
                    _count++;
                }

                flag = 1;

            }else{
                flag = 0;
            }
        }

        cout << _count << endl;
    }
    return 0;
}
