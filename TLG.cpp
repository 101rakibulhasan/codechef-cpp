#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    int p1[t];
    int p2[t];
    int arr[t];
    int win[t];

    for(int i = 0 ; i<t;i++)
    {
        int a,b;
        cin >> a >> b;

        if(i==0){
            p1[i] = a;
            p2[i] = b;
        }else
        {
            p1[i] = a + p1[i-1];
            p2[i] = b + p2[i-1];
        }

    }

    for(int i = 0 ; i<t;i++)
    {
        if(p1[i]>p2[i]){
            arr[i] = p1[i]-p2[i];
            win[i] = 1;
        }else{
            arr[i] = p2[i]-p1[i];
            win[i] = 2;
        }
    }

    int _max = 0, _max_ind = 0;

    for(int i = 0 ; i<t;i++)
    {
        if(arr[i] > _max) {
            _max = arr[i];
            _max_ind = i;
        }
    }

    cout  << win[_max_ind] << " " << arr[_max_ind] << endl;
    return 0;
}
