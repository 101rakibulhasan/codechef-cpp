#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr['z'+1]= {};
    for(int j=1; j <=n;j++)
    {
        string s; cin >> s;
        for(int i=0; i < s.length(); i++)
        {
            if(j != arr[s[i]])
            {
                arr[s[i]]++;
            }

        }
    }

    int f=0;
    for(int i='a'; i <= 'z'; i++)
    {
            if(arr[i] == 3)
            {
                cout << (char)i;
                f=1;
            }
    }

    if(f==0) cout << "no such string" <<endl;

    cout << endl;
    return 0;
}
