#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " Enter the value " << endl;
    cin >> n;

    int i = 2;

    while (i < n)
    {
        if (i % 2 == 0)
        {
            cout << " not prime for " << i << endl;
        }

        else if (i % 2 != 0)
        {
            cout << " prime for " << i << endl;
        }

        i++;
    }

    return 0;
}