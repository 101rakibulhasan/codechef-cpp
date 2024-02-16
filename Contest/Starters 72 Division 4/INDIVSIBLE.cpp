#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
    {
        int a,b,c;
        cin >> a >>b >>c;

        int i = 2;

        while(i < 100)
        {
            if(a % i != 0 && b % i != 0 && c % i != 0)
            {
                break;
            }
            i++;
        }
        cout << i << endl;
    }
	return 0;
}
