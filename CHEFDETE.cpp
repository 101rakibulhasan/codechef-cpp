#include <iostream>
using namespace std;
int main()
{
    int n; cin >> n;
    int arr[n];int max=0;
    for(int i = 0 ;i <n ; i++)
    {
        cin >> arr[i];
        if(max<arr[i])
        {
            max = arr[i];
        }
    }

    n++;
    int freq[n] = {0};

    for(int i = 0 ;i < n-1 ; i++)
    {
        freq[arr[i]]++;
    }

    for(int i = 1 ;i < n ; i++)
    {
        if(freq[i] == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}
