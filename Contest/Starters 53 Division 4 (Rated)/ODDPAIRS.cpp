#include<iostream>

using namespace std;

int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        long long int n,a =1,_count =0;
        cin >> n;
        long long int b =n;

        for(a = 1; a <=n ; a++){
                for(b = n;b > 0; b = b -2)
                {
                    if((a + b) % 2 == 1)
                    {
                        _count++;
                    }
                }
        }
        cout << _count*2 << endl;



    }
    return 0;
}
