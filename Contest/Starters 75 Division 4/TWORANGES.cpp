#include<iostream>

using namespace std;

int main()
{
    int t;cin >> t;
    while(t--)
    {
        int a,b,x,y,c=0; cin >> a >> b >> x >> y;
        int arr[9] = {};

        for(int i = a; i<=b;i++)
        {
            arr[i] = 1;
        }

        for(int i = x; i<=y;i++)
        {
            arr[i] = 1;
        }


        for(int i = 1; i<=8;i++)
        {
            if(arr[i] == 1){
                c++;
            }
        }

        cout << c << endl;


    }
    return 0;
}
