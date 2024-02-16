#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int x,c = 0; cin>>x;
        int arr[x];
        for(int i=0; i <x; i++) cin >> arr[i];
        for(int i=x-1; i >=0; i--)
        {
            if(arr[i] <=7 && arr[i] >= 1){
                break;
            }else c++;
        }

        cout << x - c << endl;
    }
    return 0;
}
