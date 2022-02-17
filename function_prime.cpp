#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 1)
        {
            return 1;
        }

        else
        {
            return 0;
        }
    }
}

int main()
{
    int n;
    cout << " Enter the number " << endl;
    cin >> n;

    if ( isPrime(n) )
    {
        cout << " is a prime number " << endl;
    }

    else
    {
        cout << " is a non prime number " << endl;
    }

    return 0;
}